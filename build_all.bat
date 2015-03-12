@echo off
@echo Starting build operations... > build_output.txt
@echo. >> build_output.txt
@echo. >> build_output.txt

@echo 001 simple string concatenation >> build_output.txt
cd "001 simple string concatenation"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 002 excercise with operators >> build_output.txt
cd "002 excercise with operators"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 003 input and type >> build_output.txt
cd "003 input and type"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 004 basic cpp types >> build_output.txt
cd "004 basic cpp types"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 005 read write first name >> build_output.txt
cd "005 read write first name"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 006 hello world >> build_output.txt
cd "006 hello world"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 007 comparison of strings >> build_output.txt
cd "007 comparison of strings"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 008 test for word repetition >> build_output.txt
cd "008 test for word repetition"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 009 unsafe conversions >> build_output.txt
cd "009 unsafe conversions"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 010 unsafe conversions take 2 >> build_output.txt
cd "010 unsafe conversions take 2"
call build
type build_output.txt >> ..\build_output.txt
cd ..

EXIT
