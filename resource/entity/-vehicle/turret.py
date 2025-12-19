#!/usr/bin/env python3
import re
import sys
from pathlib import Path

def get_multiplier(val: float) -> float:
    if val > 6:
        return 0.6
    if val > 3:
        return 0.5
    return 0.4

def transform_speed2(match: re.Match) -> str:
    old_val = float(match.group(1))
    new_val = old_val * get_multiplier(old_val)
    return f"{{speed2 {new_val}}}"

def process_file(path: Path, dry_run: bool) -> int:
    for enc in ("utf-8", "latin-1"):
        try:
            content = path.read_text(encoding=enc)
            break
        except UnicodeDecodeError:
            continue
    else:
        print(f"{path}: SKIPPED (encoding error)")
        return 0
    
    new_content, count = re.subn(r"\{speed2\s+(\d+(?:\.\d+)?)\}", transform_speed2, content)
    
    if count > 0:
        print(f"{path}: {count} replacement(s)")
        if not dry_run:
            path.write_text(new_content, encoding=enc)
    return count

def main():
    dry_run = "--dry-run" in sys.argv
    root = Path(".")
    
    excluded = {"as2", "bitgamer"}
    
    total = 0
    for f in root.rglob("*.def"):
        if any(ex in f.parts for ex in excluded):
            continue
        total += process_file(f, dry_run)
    
    print(f"\nTotal: {total} replacement(s)" + (" (dry run)" if dry_run else ""))

if __name__ == "__main__":
    main()