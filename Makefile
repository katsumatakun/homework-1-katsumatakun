OBJS = add.o sub.o mul.o div.o
OBJS2 = add.h sub.h mul.h div.h

all: calc

calc: calc.o $(OBJS) $(OBJS2)
	gcc -o calc calc.o $(OBJS)

calc.o: calc.c $(OBJS2)
	gcc -c calc.c

add.o: add.c add.h
	gcc -c add.c

sub.o: sub.c sub.h
	gcc -c sub.c

mul.o: mul.c mul.h
	gcc -c mul.c

div.o: div.c div.h
	gcc -c div.c

clean:
	rm -rf calc *.o
