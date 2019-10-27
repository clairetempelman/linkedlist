all: linkedlistmain.o linkedlist.o
	gcc -o program linkedlistmain.o linkedlist.o

linkedlistmain.o: linkedlistmain.c linkedlisth.h
	gcc -c linkedlistmain.c

linkedlist.o: linkedlist.c linkedlisth.h
	gcc -c linkedlist.c

run:
	./program

clean:
	rm *.o
	rm *~
