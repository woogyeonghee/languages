a.out : list.o main.o
	gcc -o a.out list.o main.o

list.o : list.c
	gcc -c -o list.o list.c

main.o : main.c
	gcc -c -o main.o main.c

clean :
	rm *.o a.out
