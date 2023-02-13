# Directories
SRC_DIR:=../

# Files
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.so)

# Implicit Variables
CC:=gcc
CFLAGS:=-c -fPIC
LDFLAGS:=-shared

# MAKE
lib: $(OBJ)

.PHONY: lib clean
#.PRECIOUS: %.o // without it object files gets removed

%.so: %.o
	$(CC) $(LDFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean
clean-lib:
	$(RM) ./*.o $(OBJ)