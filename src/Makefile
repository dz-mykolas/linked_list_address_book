# Directories
SRC_DIR:=./
OBJ_DIR:=../obj

# Files
SRC:=$(wildcard $(SRC_DIR)/*.c)
OBJ:=$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Implicit Variables
CC:=gcc

# MAKE
src: $(OBJ)

.PHONY: src clean

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)	# $< same as $^ here (% generates multiple rules for each file)
	$(CC) -c $< -o $@

$(OBJ_DIR): # create directories if does not exist
	mkdir -p $@

# Clean
clean-src:
	$(RM) -rv $(OBJ_DIR)