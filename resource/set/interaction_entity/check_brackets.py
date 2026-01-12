#!/usr/bin/env python3
"""Check if brackets are balanced in all files in the current directory."""

import os
import sys
from pathlib import Path


def check_balanced(filepath):
    """Check if round () and curly {} brackets are balanced in a file.

    Returns:
        tuple: (is_balanced, error_message)
    """
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
    except Exception as e:
        return False, f"Error reading file: {e}"

    stack = []
    brackets = {'(': ')', '{': '}'}
    closing = {')': '(', '}': '{'}

    # Track line and column numbers
    line_num = 1
    col_num = 1
    in_block_comment = False
    in_line_comment = False

    i = 0
    while i < len(content):
        char = content[i]

        # Check for block comment start ;/*
        if not in_block_comment and not in_line_comment and i + 2 < len(content):
            if content[i:i+3] == ';/*':
                in_block_comment = True
                i += 3
                col_num += 3
                continue

        # Check for block comment end */
        if in_block_comment and i + 1 < len(content):
            if content[i:i+2] == '*/':
                in_block_comment = False
                i += 2
                col_num += 2
                continue

        # Check for line comment start ;
        if not in_block_comment and not in_line_comment and char == ';':
            in_line_comment = True

        # End line comment at newline
        if in_line_comment and char == '\n':
            in_line_comment = False

        # Only process brackets if not in a comment
        if not in_block_comment and not in_line_comment:
            if char in brackets:
                stack.append((char, line_num, col_num))
            elif char in closing:
                if not stack:
                    return False, f"Unexpected closing '{char}' at line {line_num}, column {col_num}"
                opening, open_line, open_col = stack.pop()
                if opening != closing[char]:
                    return False, f"Mismatched brackets: '{opening}' at line {open_line}:{open_col} closed by '{char}' at line {line_num}:{col_num}"

        # Update line and column numbers
        if char == '\n':
            line_num += 1
            col_num = 1
        else:
            col_num += 1

        i += 1

    if stack:
        unclosed = [(char, line, col) for char, line, col in stack[:5]]
        unclosed_str = ', '.join([f"'{char}' at line {line}:{col}" for char, line, col in unclosed])
        return False, f"Unclosed brackets: {unclosed_str}"

    return True, "OK"


def main():
    """Check all files in current directory and subdirectories."""
    current_dir = Path('.')
    files_checked = 0
    files_with_errors = 0

    # Get all files (not directories)
    all_files = [f for f in current_dir.rglob('*') if f.is_file() and f.name != 'check_brackets.py']

    if not all_files:
        print("No files found to check.")
        return 0

    print(f"Checking {len(all_files)} files for bracket balance...\n")

    for filepath in sorted(all_files):
        files_checked += 1
        is_balanced, message = check_balanced(filepath)

        if not is_balanced:
            files_with_errors += 1
            print(f"[ERROR] {filepath}")
            print(f"   {message}\n")
        else:
            print(f"[OK] {filepath}")

    print(f"\n{'='*60}")
    print(f"Total files checked: {files_checked}")
    print(f"Files with errors: {files_with_errors}")
    print(f"Files OK: {files_checked - files_with_errors}")

    return 1 if files_with_errors > 0 else 0


if __name__ == '__main__':
    sys.exit(main())
