# Rename .def/.ext/.mdl files and their containing folders with 'np_' prefix

$extensions = @('*.def', '*.ext', '*.mdl')

# Find all target files
$files = Get-ChildItem -Recurse -Include $extensions | Where-Object { !$_.Name.StartsWith('np_') }

if (-not $files) {
    Write-Host "No target files found (.def, .ext, .mdl)"
    exit
}

Write-Host "Found $($files.Count) target files"

# Rename files first
Write-Host "`n=== Renaming Files ==="
$files | ForEach-Object {
    $newName = "np_$($_.Name)"
    $newPath = Join-Path $_.Directory $newName
    Rename-Item $_.FullName $newPath -ErrorAction Continue
    Write-Host "File: $($_.Name) → $newName"
}

# Find folders containing target files, rename deepest first
Write-Host "`n=== Renaming Folders ==="
$folders = $files | ForEach-Object { $_.Directory } | 
           Select-Object -Unique | 
           Where-Object { !$_.Name.StartsWith('np_') } |
           Sort-Object { $_.FullName.Split('\').Count } -Descending

$folders | ForEach-Object {
    $newName = "np_$($_.Name)"
    $newPath = Join-Path $_.Parent $newName
    Rename-Item $_.FullName $newPath -ErrorAction Continue
    Write-Host "Folder: $($_.Name) → $newName"
}

Write-Host "`nDone."