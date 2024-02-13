@echo off

REM Synchronously run build.bat to build the project first and wait to run the rest of the script.

call build.bat

REM Set the name of the folder where your release build / package will be stored.

set "release_package_dir=release_package"

REM Change to the directory where you want to create the release folder.
REM In this case, I want to put it up one level.

cd..

REM Create the directory at this location if it does not already exist.
REM If the directory does exist, you will be prompted to overwrite the contents.

if not exist %release_package_dir% mkdir %release_package_dir%

REM Change directories to where you want to start copying from here. 

REM Start copying individual files or entire directories as needed.

xcopy source\* %release_package_dir% /e
xcopy win-alert-demo.exe %release_package_dir% 
xcopy README.md %release_package_dir% 

REM Delete anything that should not be included in the release package.

cd %release_package_dir%
del main.c