import re
import sys
from pathlib import Path

SCRIPT_PATH = Path(__file__).resolve()

def fix_visibility_blocks(content: str) -> str:
    """Comment out {linear when it coexists with a preferred interpolation sibling."""
    
    def find_block_end(s: str, start: int) -> int:
        """Find matching closing brace from start position (after opening brace)."""
        depth = 1
        i = start
        while i < len(s) and depth > 0:
            if s[i] == '{': depth += 1
            elif s[i] == '}': depth -= 1
            i += 1
        return i
    
    result = []
    i = 0
    
    while i < len(content):
        match = re.match(r'\{\w+\b', content[i:])
        if match:
            block_start = i
            inner_start = i + match.end()
            block_end = find_block_end(content, inner_start)
            block = content[block_start:block_end]
            
            has_linear = re.search(r'\{#?\+?\s*linear\b', block) and not re.search(r'\{##\s*linear\b', block)
            has_preferred = re.search(r'\{#?\+?\s*(peak|n?power|mpower)\b', block)
            
            if has_linear and has_preferred:
                block = re.sub(r'\{#?\+?\s*linear\b', '{## linear', block, count=1)
            
            result.append(block)
            i = block_end
        else:
            result.append(content[i])
            i += 1
    
    return ''.join(result)

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