#!/bin/bash

# Script to strip "np_" prefix from all files in the current directory tree

# Find all files (not directories) that start with "np_" and rename them
find . -type f -name "np_*" | while read -r filepath; do
    # Get the directory and filename
    dir=$(dirname "$filepath")
    filename=$(basename "$filepath")

    # Remove "np_" prefix from filename
    newfilename="${filename#np_}"

    # Construct new full path
    newpath="$dir/$newfilename"

    # Only rename if the new filename is different (safety check)
    if [ "$filepath" != "$newpath" ]; then
        echo "Renaming: $filepath -> $newpath"
        mv "$filepath" "$newpath"
    fi
done

echo "Done! All files with 'np_' prefix have been renamed."
