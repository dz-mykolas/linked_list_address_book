SRC_DIR:=./src
TARGET_EXEC:=test
CC:=gcc
# FILES
SRC:=$(wildcard $(SRC_DIR)/*.c)
OBJ:=$(SRC:.c=.o) # $(text:suffix=replacement)

all: $(TARGET_EXEC)
	
$(TARGET_EXEC): $(OBJ)
	$(CC) -o $(TARGET_EXEC) $(OBJ)

clean:
	rm $(OBJ) test