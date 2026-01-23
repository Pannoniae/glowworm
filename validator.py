#!/usr/bin/env python3
"""
Validator script for Gates of Hell mod files.

1. AI .lua files: Checks that unit references are valid and no "doctrine" tag in type arrays
2. MP .set files: Checks for missing/duplicate macro arguments
"""

import re
import os
import sys
from pathlib import Path
from collections import defaultdict

# Base path for the mod
MOD_ROOT = Path(__file__).parent / "resource"


def parse_lua_units(lua_content: str) -> list[dict]:
    """
    Extract unit entries from AI .lua files.
    Returns list of dicts with 'unit', 'types', 'line_num', 'is_commented'.

    Handles Lua comment idioms:
    - --[[ starts block comment, ]] ends it
    - ---[[ does NOT start block comment (third dash makes it a line comment)
    - Same applies to long brackets like --[====[ and ---[====[
    """
    entries = []
    lines = lua_content.split('\n')

    # Track block comment state
    in_block_comment = False

    for line_num, line in enumerate(lines, 1):
        stripped = line.strip()

        # Handle block comments: --[[ or --[=+[
        # But NOT ---[[ or ---[=+[ (those are line comments that DON'T start blocks)
        # Check for exactly 2 dashes before the bracket
        block_start = re.search(r'(?<!-)--\[(=*)\[', stripped)
        if block_start and not stripped.startswith('---'):
            in_block_comment = True

        # Check for block end: ]] or ]=+]
        if in_block_comment:
            if ']]' in stripped or re.search(r'\]=*\]', stripped):
                in_block_comment = False
                continue
            continue

        # Check if line is commented with -- (single line comment)
        is_line_commented = stripped.startswith('--')

        # Pattern to match unit entries: {priority = X, type = {...}, unit = "..."}
        # Match the type array and unit name
        match = re.search(
            r'\{\s*priority\s*=\s*[\d.]+\s*,\s*type\s*=\s*\{([^}]*)\}\s*,\s*unit\s*=\s*"([^"]+)"',
            line
        )

        if match:
            types_str = match.group(1)
            unit_name = match.group(2)

            # Parse the types array
            types = [t.strip().strip('"').strip("'") for t in types_str.split(',') if t.strip()]

            entries.append({
                'unit': unit_name,
                'types': types,
                'line_num': line_num,
                'is_commented': is_line_commented
            })

    return entries


def extract_set_unit_names(set_content: str) -> set[str]:
    """
    Extract all unit names defined in a .set file.
    Handles both block style {"name" ...} and inline name(unit_name) style.
    """
    units = set()

    # Remove comments (lines starting with ;)
    lines = []
    for line in set_content.split('\n'):
        stripped = line.strip()
        if not stripped.startswith(';'):
            # Also handle inline comments
            if ';' in line:
                line = line[:line.index(';')]
            lines.append(line)
    content = '\n'.join(lines)

    # Pattern 1: Block style {"unit_name" ...}
    # Match opening brace, quoted name, then anything until closing brace
    block_pattern = r'\{\s*"([^"]+)"'
    for match in re.finditer(block_pattern, content):
        units.add(match.group(1))

    # Pattern 2: Inline style with name(unit_name)
    name_pattern = r'name\(([^)]+)\)'
    for match in re.finditer(name_pattern, content):
        units.add(match.group(1))

    return units


def validate_ai_lua_file(lua_path: Path, valid_units: set[str]) -> list[str]:
    """
    Validate an AI .lua file.
    Returns list of error messages.
    """
    errors = []

    with open(lua_path, 'r', encoding='utf-8') as f:
        content = f.read()

    entries = parse_lua_units(content)

    for entry in entries:
        if entry['is_commented']:
            continue

        # Check 1: No "doctrine" in type array (case insensitive)
        for t in entry['types']:
            if t.lower() == 'doctrine':
                errors.append(
                    f"{lua_path.name}:{entry['line_num']}: "
                    f"Unit '{entry['unit']}' has 'doctrine' tag in type array"
                )

        # Check 2: Unit should exist in valid units
        # Strip the (faction) suffix if present for matching
        unit_name = entry['unit']
        base_name = re.sub(r'\([^)]+\)$', '', unit_name)

        if unit_name not in valid_units and base_name not in valid_units:
            errors.append(
                f"{lua_path.name}:{entry['line_num']}: "
                f"Unit '{unit_name}' not found in .set files"
            )

    return errors


def parse_macro_definitions(set_content: str) -> dict[str, list[str]]:
    """
    Parse macro definitions from settings.set to extract required parameters.
    Returns dict of macro_name -> list of required parameter names.
    """
    macros = {}

    # Pattern: (define "macro_name" ... )
    # We need to extract parameter names that appear as %param
    define_pattern = r'\(define\s+"([^"]+)"([^)]*(?:\([^)]*\)[^)]*)*)\)'

    for match in re.finditer(define_pattern, set_content, re.DOTALL):
        macro_name = match.group(1)
        macro_body = match.group(2)

        # Find all %param references in the macro body
        params = set(re.findall(r'%(\w+)', macro_body))
        macros[macro_name] = list(params)

    return macros


def validate_macro_call(line: str, line_num: int, macro_defs: dict[str, list[str]]) -> list[str]:
    """
    Validate a macro call for duplicate arguments.
    Returns list of error messages.
    """
    errors = []

    # Pattern: ("macro_name" arg1(val) arg2(val) ...)
    # First extract the macro name
    macro_match = re.match(r'\s*\(\s*"([^"]+)"', line)
    if not macro_match:
        return errors

    macro_name = macro_match.group(1)

    # Extract all arguments with their values: argname(value)
    args_pattern = r'(\w+)\s*\(([^)]*)\)'
    found_args = re.findall(args_pattern, line)

    # Group by argument name to check for duplicates
    arg_values = defaultdict(list)
    for arg_name, arg_value in found_args:
        arg_values[arg_name].append(arg_value.strip())

    for arg_name, values in arg_values.items():
        if len(values) > 1:
            unique_values = set(values)
            if len(unique_values) > 1:
                # Different values with same arg name - definitely a bug
                errors.append(
                    f"Line {line_num}: Duplicate argument '{arg_name}' with DIFFERENT values: {values}"
                )
            else:
                # Same value repeated - still likely a bug or bad macro usage
                errors.append(
                    f"Line {line_num}: Duplicate argument '{arg_name}' ({len(values)}x same value: '{values[0]}')"
                )

    return errors


def validate_set_file(set_path: Path, macro_defs: dict[str, list[str]]) -> list[str]:
    """
    Validate a .set file for macro argument issues.
    Returns list of error messages.
    """
    errors = []

    with open(set_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()

    for line_num, line in enumerate(lines, 1):
        stripped = line.strip()

        # Skip comments
        if stripped.startswith(';'):
            continue

        # Skip lines inside block definitions that start with { - we want macro calls
        # Look for lines that start with ( and contain a quoted macro name
        if re.match(r'\s*\(\s*"', stripped):
            line_errors = validate_macro_call(stripped, line_num, macro_defs)
            for err in line_errors:
                errors.append(f"{set_path.name}:{err}")

    return errors


def collect_all_units() -> set[str]:
    """
    Collect all valid unit names from .set files in the late period folder only.
    """
    all_units = set()
    units_dir = MOD_ROOT / "set" / "multiplayer" / "units" / "late"

    if not units_dir.exists():
        print(f"Warning: Units directory not found: {units_dir}")
        return all_units

    for set_file in units_dir.rglob("*.set"):
        if set_file.name == "settings.set":
            continue
        try:
            with open(set_file, 'r', encoding='utf-8') as f:
                content = f.read()
            units = extract_set_unit_names(content)
            all_units.update(units)
        except Exception as e:
            print(f"Warning: Could not parse {set_file}: {e}")

    return all_units


def load_macro_definitions() -> dict[str, list[str]]:
    """
    Load macro definitions from settings.set.
    """
    settings_path = MOD_ROOT / "set" / "multiplayer" / "units" / "settings.set"

    if not settings_path.exists():
        print(f"Warning: Settings file not found: {settings_path}")
        return {}

    with open(settings_path, 'r', encoding='utf-8') as f:
        content = f.read()

    return parse_macro_definitions(content)


def main():
    print("=" * 60)
    print("Gates of Hell Mod Validator")
    print("=" * 60)

    all_errors = []

    # Collect valid units
    print("\nCollecting valid unit definitions from .set files...")
    valid_units = collect_all_units()
    print(f"Found {len(valid_units)} unit definitions")

    # Load macro definitions
    print("\nLoading macro definitions...")
    macro_defs = load_macro_definitions()
    print(f"Found {len(macro_defs)} macro definitions")

    # Validate AI .lua files (only 44-45 and 46 periods)
    print("\n" + "-" * 60)
    print("Validating AI .lua files (44-45 and 46 only)...")
    print("-" * 60)

    lua_dir = MOD_ROOT / "script" / "multiplayer" / "units"
    if lua_dir.exists():
        for lua_file in lua_dir.rglob("*.lua"):
            # Only check files for late war periods
            if "44-45" not in lua_file.name and "46" not in lua_file.name:
                continue
            errors = validate_ai_lua_file(lua_file, valid_units)
            if errors:
                print(f"\n{lua_file.relative_to(MOD_ROOT)}:")
                for err in errors:
                    print(f"  - {err}")
                all_errors.extend(errors)
    else:
        print(f"Warning: Lua directory not found: {lua_dir}")

    # Validate MP .set files (late folder only)
    print("\n" + "-" * 60)
    print("Validating multiplayer .set files (late folder only)...")
    print("-" * 60)

    set_dir = MOD_ROOT / "set" / "multiplayer" / "units" / "late"
    if set_dir.exists():
        for set_file in set_dir.rglob("*.set"):
            if set_file.name == "settings.set":
                continue
            errors = validate_set_file(set_file, macro_defs)
            if errors:
                print(f"\n{set_file.relative_to(MOD_ROOT)}:")
                for err in errors:
                    print(f"  - {err}")
                all_errors.extend(errors)
    else:
        print(f"Warning: Set directory not found: {set_dir}")

    # Summary
    print("\n" + "=" * 60)
    if all_errors:
        print(f"VALIDATION FAILED: {len(all_errors)} error(s) found")
        return 1
    else:
        print("VALIDATION PASSED: No errors found")
        return 0


if __name__ == "__main__":
    sys.exit(main())
