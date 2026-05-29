@echo off
setlocal enabledelayedexpansion
set "current=%~dp0"
:searchloop
if exist "%current%source\" (
    set "mainfolder=%current%"
    goto :found
)
for %%i in ("%current:~0,-1%") do set "parent=%%~dpi"
if "%parent%"=="%current%" (
    echo Error: Could not find source
    pause
    exit /b 1
)
set "current=%parent%"
goto :searchloop
:found
xcopy "%mainfolder%factionvariants\RhunVersions\*" "%mainfolder%source\" /E /Y /I
echo Rhun Faction Swap has been turned on. Mordor is now Rhun in War of the Ring. Default difficulty will be used.
pause