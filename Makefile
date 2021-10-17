.PHONY: clean
CFLAGS=-Wall -Werror -pedantic
CC=gcc

hello: hello.c

clean:
	rm hello
