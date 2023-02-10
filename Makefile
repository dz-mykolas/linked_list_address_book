# Directories
SRC_DIR:=./src
OBJ_DIR:=./obj

# Files
EXE:=test
SRC:=$(wildcard $(SRC_DIR)/*.c)
OBJ:=$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Implicit Variables
CC:=gcc

# MAKE
all: $(EXE)

.PHONY: all clean

$(EXE): $(OBJ)
	$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)	# $< same as $^ here (% generates multiple rules for each file)
	$(CC) -c $< -o $@

$(OBJ_DIR): # create directories if does not exist
	mkdir -p $@

# Clean
clean:
	$(RM) -rv $(OBJ_DIR)
