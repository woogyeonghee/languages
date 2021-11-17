testQueue.out : queue.o main.o
	gcc -o testQueue.out queue.o main.o

queue.o : queue.c
	gcc -c -o queue.o queue.c

main.o : main.c
	gcc -c -o main.o main.c

clean :
	rm *.o testQueue.out
