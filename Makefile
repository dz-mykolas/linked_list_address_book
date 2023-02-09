SRC_DIR:=./src
TARGET_EXEC:=test
CC:=gcc
# Files
SRC:=$(wildcard $(SRC_DIR)/*.c)
OBJ:=$(SRC:.c=.o) # $(text:suffix=replacement)
# Compile
all: $(TARGET_EXEC)
	
$(TARGET_EXEC): $(OBJ)
	$(CC) -o $(TARGET_EXEC) $(OBJ)

clean:
	rm $(OBJ) test