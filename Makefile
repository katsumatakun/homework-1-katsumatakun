.PHONY: all
all: calc

calc: calc.o add.o sub.o mul.o div.o add.h sub.h mul.h div.h
	gcc -o calc calc.o add.o sub.o mul.o div.o

calc.o: calc.c add.h sub.h mul.h div.h
	gcc -c calc.c

add.o: add.c
		gcc -c add.c

sub.o: sub.c
		gcc -c sub.c

mul.o: mul.c
		gcc -c mul.c

div.o: div.c
		gcc -c div.c

.PHONY: clean
clean:
	rm -rf calc *.o
