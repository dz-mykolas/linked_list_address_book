BIN:=test
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)
CPPFLAGS:=-I../lib
LDFLAGS:=-L../lib -llist -Wl,-rpath ./lib

.PHONY: all clean $(BIN)

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CPPFLAGS) -o $@ $^ $(LDFLAGS)
clean:
	$(RM) $(OBJ) $(BIN)