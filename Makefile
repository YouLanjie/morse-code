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
	$(CC) $(OBJ) -L lib -ltools -o $(prom)
	@mkdir bin
	@mv $(prom) $(BIN)/main
	@rm -rf $(OBJ)

%.o: %.c $(incl)
	$(CC) -g -Wall -c $< -o $@

clean:
	@rm -rf $(OBJ) $(BIN)

