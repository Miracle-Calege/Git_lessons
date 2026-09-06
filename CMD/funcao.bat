@echo off
set /a numero=10
goto test
:test
echo %numero%
set /a numero=%numero%+1
pause
:fim
rem if %numero% GTR 15 (echo fim do programa)else (goto test)
goto test
pause>nul