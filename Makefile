#!/usr/bin/make

CC = gcc
BIN = ./bin
SRC = $(shell find ./ -name "*.c")
incl = $(shell find ./ -name "*.h")
OBJ = $(SRC:%.c=%.o)
prom = morse-code

all: morse-code

$(prom): $(OBJ)
	@rm -rf $(BIN)
	$(CC) $(OBJ) -o $(prom)
	@mkdir bin
	@mv $(prom) $(BIN)/main
	@rm -rf $(OBJ)

%.o: %.c $(incl)
	$(CC) -g -c $< -o $@

clean:
	@rm -rf $(OBJ) $(BIN)

