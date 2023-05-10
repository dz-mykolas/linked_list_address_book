# Address book using Linked List

## Commands
Build program
```
make
```
Start program (note: addresses.csv must be in user's home directory)
```
./test
```
Remove build files
```
make clean
```
Leak check
```
valgrind --leak-check=full ./test
```
Code analysis
```
cppcheck --enable=all ./
```
Unit test from project directory
```
cd ./unit_test_Ceedling/
ceedling test:[test_file]
ceedling test:test_llist.c
ceedling test:all
```
