@echo off
mkdir output
for %%i in (input\*.in) do (
    solution.exe < %%i > output\%%~ni.out
)

powershell -Command "Compress-Archive -Path input\*.in, output\*.out -DestinationPath test_data.zip"
