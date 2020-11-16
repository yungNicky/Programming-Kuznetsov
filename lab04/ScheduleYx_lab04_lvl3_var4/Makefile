targets = ScheduleYx.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: ScheduleYx.bin

ScheduleYx.bin : src/ScheduleYx.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/ScheduleYx.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

