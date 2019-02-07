.PHONY: all
all: main

main: main.o add.o sub.o add.h sub.h
	gcc -o main main.o add.o sub.o

main.o: main.c add.h sub.h
	gcc -c main.c

add.o: add.c
		gcc -c add.c

sub.o: sub.c
		gcc -c sub.c

.PHONY: clean
clean:
	rm -rf main main.o
