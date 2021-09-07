#include <stdio.h>
#include "queue.h"

int main (void)
{
	Queue s1,s2;
	s1.front=0;
	s1.rear=0;
	push(&s1,100);
	push(&s1,200);
	printf("1st pop() : %d\n", pop(&s1));
	push(&s1,300);
	printf("1st pop() : %d\n", pop(&s1));
	printf("1st pop() : %d\n", pop(&s1));
	
	s2.front=0;
	s2.rear=0;
	push(&s2,400);
	push(&s2,300);
	printf("2st pop() : %d\n", pop(&s2));
	push(&s2,200);
	printf("2st pop() : %d\n", pop(&s2));
	printf("2st pop() : %d\n", pop(&s2));
	return 0;
}
