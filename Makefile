SRC_DIR:=./src
OBJ_DIR:=./obj
LIB_DIR:=./lib

# Files
EXE:=test

LDFLAGS+=-L$(LIB_DIR) -Wl,-R$(LIB_DIR)
# MAKE
all: $(EXE)

.PHONY: all clean

$(EXE):
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(SRC_DIR)
	$(CC) $(LDFLAGS) -o $(EXE) ./obj/*.o -lllist

# Clean
clean:
	$(MAKE) clean-lib -C $(LIB_DIR)
	$(MAKE) clean-src -C $(SRC_DIR)
	$(RM) ./test