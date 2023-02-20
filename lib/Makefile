LIB:=liblist.so
SRC:=$(wildcard *.c)
OBJ:=$(SRC:.c=.o)
CFLAGS:=-fPIC -shared

.PHONY: all clean $(LIB)

all: $(LIB)

$(LIB): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(LIB) $(OBJ)