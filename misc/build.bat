@echo off

set build_name=win-alert-demo.exe

cd..

gcc -Wall -Wextra -ansi -pedantic source\*.c -o %build_name%

