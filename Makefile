.PHONY: all
all: calc

calc: calc.o add.o sub.o mul.o add.h sub.h mul.h
	gcc -o calc calc.o add.o sub.o mul.o

calc.o: calc.c add.h sub.h mul.h
	gcc -c calc.c

add.o: add.c
		gcc -c add.c

sub.o: sub.c
		gcc -c sub.c

mul.o: mul.c
		gcc -c mul.c

.PHONY: clean
clean:
	rm -rf calc *.o
