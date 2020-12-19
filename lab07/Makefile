targets = main.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	$(CC) $(C_OPTS) lab05_task1/src/main.c -o dist/main_lab05_1.bin
	$(CC) $(C_OPTS) lab05_task2/src/main.c -o dist/main_lab05_2.bin
	$(CC) $(C_OPTS) lab05_task3/src/main.c -o dist/main_lab05_3.bin
	$(CC) $(C_OPTS) lab05_task4/src/main.c -o dist/main_lab05_4.bin
	$(CC) $(C_OPTS) lab05_task5/src/main.c -o dist/main_lab05_5.bin
	$(CC) $(C_OPTS) lab06_task1/src/main.c -o dist/main_lab06_1.bin
	$(CC) $(C_OPTS) lab06_task2/src/main.c -o dist/main_lab06_2.bin
	$(CC) $(C_OPTS) lab06_task3/src/main.c -o dist/main_lab06_3.bin
	$(CC) $(C_OPTS) lab06_task4/src/main.c -o dist/main_lab06_4.bin
	$(CC) $(C_OPTS) lab06_task5/src/main.c -o dist/main_lab06_5.bin
	$(CC) $(C_OPTS) lab06_task6/src/main.c -o dist/main_lab06_6.bin
run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO