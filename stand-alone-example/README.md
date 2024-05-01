
install linux
sudo apt-get update 
sudo apt-get install cpputest
build 
```
g++ -o main.elf  main.cpp -lCppUTest -lCppUTestExt
```
run
```
./main.elf
```