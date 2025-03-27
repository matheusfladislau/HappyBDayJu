CC = gcc
CFLAGS = -pedantic -Wall -Wextra -Werror -g
PROGRAM = message.c
OUTPUT = message.o
BUILD = build/
SRC = src/

all: $(SRC)

$(SRC): clean 
	$(CC) $(CFLAGS) $(SRC)$(PROGRAM) -o $(BUILD)$(OUTPUT)

clean:
	rm -f $(BUILD)$(BUILD)
