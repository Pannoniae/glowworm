# Get all files in the current directory and its subdirectories
$files = Get-ChildItem -Recurse -File

# Regular expression pattern to match the saturation value
$pattern = '\\s+(\d+(\.\d+)?)\}'

foreach ($file in $files) {
    $content = Get-Content -Path $file.FullName -Raw
    $global:modified = $false

    # Use regex to find and replace the saturation values
    $newContent = [regex]::Replace($content, $pattern, {
        param($match)
        $currentValue = [double]$match.Groups[1].Value
        $newValue = $currentValue + 0.5
        $global:modified = $true
        return " $($newValue.ToString('0.0'))}"
    })
	#Write-Host "$global:modified"

    # If changes were made, write the new content back to the file
    if ($modified) {
		Write-Host "$newContent"
        Set-Content -Path $file.FullName -Value $newContent
        Write-Host "Updated file: $($file.FullName)"
    }
}

Write-Host "Process completed."