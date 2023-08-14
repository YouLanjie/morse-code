#!/usr/bin/make

CC = gcc
BIN = ./bin
SRC = $(shell find ./ -name "*.c")
incl = $(shell find ./ -name "*.h")
OBJ = $(SRC:%.c=%.o)
prom = morse-code

all: morse-code

$(prom): $(OBJ)
	@if [ ! -d "$(BIN)" ]; then mkdir $(BIN); fi
	$(CC) $(OBJ) -lncurses -o $(BIN)/main

%.o: %.c $(incl)
	$(CC) -g -Wall -c $< -o $@

clean:
	@rm -rf $(OBJ) $(BIN)

