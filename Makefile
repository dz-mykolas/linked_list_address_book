SRC_DIR:=./src
OBJ_DIR:=./obj
LIB_DIR:=./lib

# Files
EXE:=test

# MAKE
all: $(EXE)

.PHONY: all clean

$(EXE):
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(SRC_DIR)
	$(CC) -L./lib -o $(EXE) ./obj/*.o -lllist

# Clean
clean:
	$(MAKE) clean-lib -C $(LIB_DIR)
	$(MAKE) clean-src -C $(SRC_DIR)
	$(RM) ./test