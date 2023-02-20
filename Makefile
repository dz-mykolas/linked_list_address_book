SRC_DIR:=./src
LIB_DIR:=./lib

.PHONY: all clean bin lib clean_lib clean_bin

all: lib bin

lib:
	$(MAKE) -C $(LIB_DIR)

bin: lib
	$(MAKE) -C $(SRC_DIR)

clean_lib:
	$(MAKE) -C $(LIB_DIR) clean

clean_bin:
	$(MAKE) -C $(SRC_DIR) clean

clean: clean_lib clean_bin