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
if not exist "%mainfolder%source\data\ini\" mkdir "%mainfolder%source\data\ini"
if not exist "%mainfolder%source\data\ini\campaigns\common\" mkdir "%mainfolder%source\data\ini\campaigns\common"
copy /Y "%mainfolder%variants\livingworldbuildingshardElves.ini" "%mainfolder%source\data\ini\livingworldbuildings.ini"
copy /Y "%mainfolder%variants\livingworldbuildableunitshardElves.inc" "%mainfolder%source\data\ini\campaigns\common\livingworldbuildableunits.inc"
echo Files copied successfully!
pause