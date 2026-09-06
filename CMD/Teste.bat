@echo off
choice /C abc /M "Insira a opcao"
if ERRORLEVEL 1 echo opcao1
if ERRORLEVEL 2 echo opcao2
if ERRORLEVEL 3 echo opcao3
pause>nul
