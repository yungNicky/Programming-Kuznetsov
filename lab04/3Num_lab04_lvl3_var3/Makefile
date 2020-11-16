targets = 3num.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 3num.bin

3num.bin : src/3num.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/3num.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

