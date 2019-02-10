OBJS = add.o sub.o mul.o div.o
OBJS2 = add.h sub.h mul.h div.h

.PHONY: all
all: calc

calc: calc.o $(OBJS) $(OBJS2)
	gcc -o calc calc.o add.o sub.o mul.o div.o

calc.o: calc.c $(OBJS2)
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
