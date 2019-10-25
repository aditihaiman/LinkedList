all: main.o linkedlist.o
	gcc -o program main.o linkedlist.o

main.o: main.c headers.h
	gcc -c main.c

linkedlist.o: linkedlist.c headers.h
	gcc -c linkedlist.c

run: 
	./program