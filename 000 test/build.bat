@echo off
@echo. > build_output.txt
del prog.exe >> build_output.txt 2>&1
@echo. >> build_output.txt
g++ -std=c++0x -D__NO_INLINE__ -O2 -o prog.exe main.cpp >> build_output.txt 2>&1
@echo. >> build_output.txt
