import re
import sys
from pathlib import Path

SCRIPT_PATH = Path(__file__).resolve()
PREFERRED = {'peak', 'power', 'npower', 'mpower'}

def fix_visibility_blocks(content: str) -> str:
    lines = content.splitlines(keepends=True)
    block_re = re.compile(r'^(\s*)\{(#?\+?\s*)(linear|peak|n?power|mpower)\b')
    
    # Collect interpolation blocks: (line_idx, indent_len, keyword, already_commented)
    blocks = []
    for i, line in enumerate(lines):
        if m := block_re.match(line):
            blocks.append((i, len(m[1]), m[3], '##' in m[2]))
    
    # Find linear blocks needing fix
    to_fix = set()
    for idx, indent, kw, commented in blocks:
        if kw == 'linear' and not commented:
            for idx2, indent2, kw2, _ in blocks:
                if indent2 == indent and kw2 in PREFERRED and _are_siblings(lines, idx, idx2, indent):
                    to_fix.add(idx)
                    break
    
    # Apply fixes
    for i in to_fix:
        lines[i] = re.sub(r'\{#?\+?\s*linear\b', '{## linear', lines[i], count=1)
    
    return ''.join(lines)

def _are_siblings(lines: list[str], a: int, b: int, indent: int) -> bool:
    """True if no line between a and b has indentation < indent (parent boundary)."""
    for i in range(min(a, b) + 1, max(a, b)):
        line = lines[i]
        if line.strip() and (len(line) - len(line.lstrip())) < indent:
            return False
    return True

def main():
    dry_run = '--dry-run' in sys.argv
    
    for path in Path('.').rglob('*'):
        if not path.is_file() or path.resolve() == SCRIPT_PATH:
            continue
        
        try:
            original = path.read_text(encoding='utf-8')
        except (UnicodeDecodeError, PermissionError):
            continue
        
        fixed = fix_visibility_blocks(original)
        
        if original != fixed:
            if dry_run:
                print(f"[DRY] Would fix: {path}")
            else:
                path.write_text(fixed, encoding='utf-8')
                print(f"Fixed: {path}")

if __name__ == '__main__':
    main()