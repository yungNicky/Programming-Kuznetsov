targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	$(CC) $(C_OPTS) "task 1.3/src/main.c" -o dist/main1_3.bin
	$(CC) $(C_OPTS) "task 2.2/src/main.c" -o dist/main2_2.bin
	$(CC) $(C_OPTS) "task 2.4/src/main.c" -o dist/main2_4.bin
	$(CC) $(C_OPTS) "task 3.1/src/main.c" -o dist/main3_1.bin
	$(CC) $(C_OPTS) "task 3.2/src/main.c" -o dist/main3_2.bin
	$(CC) $(C_OPTS) "task 3.3/src/main.c" -o dist/main3_3.bin
	$(CC) $(C_OPTS) "task 3.4/src/main.c" -o dist/main3_4.bin
	$(CC) $(C_OPTS) "task 3.5/src/main.c" -o dist/main3_5.bin
	$(CC) $(C_OPTS) "task 3.6/src/main.c" -o dist/main3_6.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
