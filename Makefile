OBJ_DIR:=./obj
LIB_DIR:=./lib

# Files
EXE:=test

# Implicit Variables
CC:=gcc

# MAKE
all: $(EXE)

.PHONY: all clean

$(EXE): src lib
	$(CC) -o $@ lib/*.so obj/*.o

src:
	make -C src

lib:
	make -c lib

# Clean
clean:
	make clean -C lib
	make clean -C src
	$(RM) ./test