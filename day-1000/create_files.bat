@echo off
setlocal enabledelayedexpansion

:: Set the filename containing the list
set "listfile=list.txt"

:: Check if the list file exists
if not exist "%listfile%" (
    echo List file not found!
    pause
    exit /b
)

:: Debug: Display the file content
echo Reading list from "%listfile%"...
type "%listfile%"

:: Read each line from the list and create files
for /f "delims=" %%a in (%listfile%) do (
    set "name=%%a"
    
    :: Skip any lines that are empty
    if not "!name!"=="" (
        :: Replace spaces with underscores
        set "name=!name: =_!"
        
        :: Prepend underscore and append .word extension
        echo Creating file: _!name!.cpp
        echo. > "_!name!.cpp"
    ) else (
        echo Skipping empty line.
    )
)
for /f "delims=" %%a in (%listfile%) do (
    set "name=%%a"
    
    :: Skip any lines that are empty
    if not "!name!"=="" (
        :: Replace spaces with underscores
        set "name=!name: =_!"
        
        :: Prepend underscore and append .word extension
        echo Creating file: _!name!.py
        echo. > "_!name!.py"
    ) else (
        echo Skipping empty line.
    )
)

echo Files created successfully.
pause
