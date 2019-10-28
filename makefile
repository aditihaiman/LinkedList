ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif


all: main.o linkedlist.o
	$(CC) -o program main.o linkedlist.o

main.o: main.c headers.h
	$(CC) -c main.c

linkedlist.o: linkedlist.c headers.h
	$(CC) -c linkedlist.c

run: 
	./program

memcheck:
	valgrind --leak-check=yes ./program


clean:
	rm *.o
	rm *~