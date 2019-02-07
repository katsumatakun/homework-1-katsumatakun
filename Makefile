.PHONY: all
all: calc

calc: calc.o add.o sub.o add.h sub.h
	gcc -o calc calc.o add.o sub.o

main.o: calc.c add.h sub.h
	gcc -c calc.c

add.o: add.c
		gcc -c add.c

sub.o: sub.c
		gcc -c sub.c

.PHONY: clean
clean:
	rm -rf calc *.o
