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
