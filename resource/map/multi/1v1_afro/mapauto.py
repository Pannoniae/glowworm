import sys
import os
from lark import Lark, Token, Tree
from lark.reconstruct import Reconstructor

# Define the grammar for parsing the configuration file
grammar = r"""
    start: (_WHITESPACE | _COMMENT | node)*
    
    node: builtin | function | value | args | _COMMENT | _WHITESPACE?
    
    args: LITERAL _WHITESPACE? "(" value _WHITESPACE? ")"
    
    builtin: "{" _WHITESPACE? value _WHITESPACE? node* _WHITESPACE? "}"
    function: "(" _WHITESPACE? value _WHITESPACE? node* _WHITESPACE? ")"
    
    ?value: LITERAL | STRING | NUMBER
    
    LITERAL: /[a-zA-Z_][a-zA-Z0-9_]*/
    STRING: /"[^"]*"/
    NUMBER: /-?(0x[0-9a-fA-F]+|[0-9]+(\.[0-9]+)?)/
    _WHITESPACE: /[ \t\f\r\n]+/
    _COMMENT: /;[^\n]*/
    """

def parse_and_modify_config(input_file):
    # Create parser
    parser = Lark(grammar, 
                  parser='earley', 
                  lexer='basic',
                  keep_all_tokens=True,
                  maybe_placeholders=False)

    # Read input file
    with open(input_file, 'r') as f:
        content = f.read()

    # Parse the content
    tree = parser.parse(content)

    def find_and_modify_block(tree, block_name, include_line):
        """Find a specific block and insert an include statement"""
        if isinstance(tree, Tree):
            # If it's a builtin block with the target name
            
            if (tree.data == 'builtin' and 
                len(tree.children) > 0 and 
                isinstance(tree.children[1], Token) and 
                tree.children[1].value == block_name):
                print("HI!")
                
                # Create include function node
                include_node = parser.parse(f'(include "{include_line}")\n\n')
                #for c in tree.children:
                #    if isinstance(c, Token):
                #        print(c.type)
                #    if isinstance(c, Tree):
                #        print(c.data)
                
                # Insert the include node at the beginning of the block's children
                # LBRACE, LITERAL, _WHITESPACE
                tree.children.insert(3, include_node)
            
            # Recursively process children
            for child in tree.children:
                find_and_modify_block(child, block_name, include_line)

    # Modify the tree
    find_and_modify_block(tree, 'Helpers', "../bz_events.inc")
    find_and_modify_block(tree, 'vars', "../bz_vars.inc")
    find_and_modify_block(tree, 'triggers', "../bz_triggers.inc")

    # Reconstruct the modified content
    reconstructor = Reconstructor(parser)
    modified_content = reconstructor.reconstruct(tree)
    
    input_file_new = input_file + ".new"

    # Write back to the file
    with open(input_file_new, 'w') as f:
        f.write(modified_content)

def main():
    if len(sys.argv) < 2:
        print("Usage: python modify_config.py <input_file>")
        sys.exit(1)

    input_file = sys.argv[1]
    
    if not os.path.exists(input_file):
        print(f"Error: File {input_file} does not exist.")
        sys.exit(1)

    parse_and_modify_config(input_file)
    print(f"Successfully modified {input_file}")

if __name__ == "__main__":
    main()