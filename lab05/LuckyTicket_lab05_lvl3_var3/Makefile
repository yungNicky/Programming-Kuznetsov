targets = LuckyTicket.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: LuckyTicket.bin

LuckyTicket.bin : src/LuckyTicket.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/LuckyTicket.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

