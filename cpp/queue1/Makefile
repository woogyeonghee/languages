testQueue.out : queue.o main.o
	g++ -o testQueue.out queue.o main.o

queue.o : queue.cpp
	g++ -c -o queue.o queue.cpp

main.o : main.cpp
	g++ -c -o main.o main.cpp

clean :
	rm *.o testQueue.out
