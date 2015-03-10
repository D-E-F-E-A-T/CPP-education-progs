@echo off
@echo Starting build operations... > build_output.txt
@echo. >> build_output.txt
@echo. >> build_output.txt

@echo 1. simple string concatenation 01 >> build_output.txt
cd "simple string concatenation 01"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 2. excercise with operators 01 >> build_output.txt
cd "excercise with operators 01"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 3. input and type 01 >> build_output.txt
cd "input and type 01"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 4. basic cpp types 01 >> build_output.txt
cd "basic cpp types 01"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 5. read write first name 01 >> build_output.txt
cd "read write first name 01"
call build
type build_output.txt >> ..\build_output.txt
cd ..

@echo 6. hello world 01 >> build_output.txt
cd "hello world 01"
call build
type build_output.txt >> ..\build_output.txt
cd ..

EXIT
