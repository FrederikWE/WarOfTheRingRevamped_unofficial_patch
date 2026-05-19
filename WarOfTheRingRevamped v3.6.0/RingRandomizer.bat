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
echo.
echo =====================================
echo Ring Randomizer
echo =====================================
echo.

REM Create destination directory if it doesn't exist
if not exist "%mainfolder%source\data\ini\campaigns\scenarios\" (
    echo Creating scenarios directory...
    mkdir "%mainfolder%source\data\ini\campaigns\scenarios\"
)

REM Copy the default historic scenario
echo Setting up base scenario configuration...
copy /Y "%mainfolder%variants\scenarios\paperscenariohistoricdefault.inc" "%mainfolder%source\data\ini\campaigns\scenarios\paperscenariohistoric.inc" >nul 2>&1
if %errorlevel% equ 0 (
    echo Base scenario configured
) else (
    echo [ERROR] Failed to configure base scenario
)
echo.

REM Select and copy random Find the Halfling variant
echo Randomizing Ringbearer starting location...
set /a fth_count=0
for %%f in ("%mainfolder%variants\scenarios\paperscenariofindthehalfling*.inc") do (
    set /a fth_count+=1
)

if !fth_count! equ 0 (
    echo [WARNING] No Find the Halfling variants found
) else (
    set /a fth_random=!RANDOM! %% !fth_count! + 1
    
    REM Loop through files again and copy the one matching our random number
    set /a fth_counter=0
    for %%f in ("%mainfolder%variants\scenarios\paperscenariofindthehalfling*.inc") do (
        set /a fth_counter+=1
        if !fth_counter! equ !fth_random! (
            copy /Y "%%f" "%mainfolder%source\data\ini\campaigns\scenarios\paperscenariofindthehalfling.inc" >nul 2>&1
            if !errorlevel! equ 0 (
                echo Ringbearer location randomized
            ) else (
                echo [ERROR] Failed to randomize Ringbearer location
            )
        )
    )
)
echo.

REM Select and copy random Will of the Ring variant
echo Randomizing Sauron spawn timing...
set /a wotr_count=0
for %%f in ("%mainfolder%variants\scenarios\paperscenariowillofthering*.inc") do (
    set /a wotr_count+=1
)

if !wotr_count! equ 0 (
    echo [WARNING] No Will of the Ring variants found
) else (
    set /a wotr_random=!RANDOM! %% !wotr_count! + 1
    
    REM Loop through files again and copy the one matching our random number
    set /a wotr_counter=0
    for %%f in ("%mainfolder%variants\scenarios\paperscenariowillofthering*.inc") do (
        set /a wotr_counter+=1
        if !wotr_counter! equ !wotr_random! (
            copy /Y "%%f" "%mainfolder%source\data\ini\campaigns\scenarios\paperscenariowillofthering.inc" >nul 2>&1
            if !errorlevel! equ 0 (
                echo Sauron spawn timing randomized
            ) else (
                echo [ERROR] Failed to randomize Sauron spawn timing
            )
        )
    )
)
echo.

echo =====================================
echo Scenario randomization complete!
echo =====================================
echo.
echo Remember to copy the contents of source
echo into your aotr folder.
echo.
echo Enjoy!
pause
