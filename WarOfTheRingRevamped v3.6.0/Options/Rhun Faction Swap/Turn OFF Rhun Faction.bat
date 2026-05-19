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
xcopy "%mainfolder%factionvariants\MordorVersions\*" "%mainfolder%source\" /E /Y /I
echo Rhun Faction Swap has been turned off. Default difficulty has been restored.
pause