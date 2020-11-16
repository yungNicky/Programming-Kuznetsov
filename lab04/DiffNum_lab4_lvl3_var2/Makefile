targets = DiffNum.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: DiffNum.bin

DiffNum.bin : src/DiffNum.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/DiffNum.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

