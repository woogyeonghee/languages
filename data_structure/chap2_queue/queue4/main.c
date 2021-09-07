#include <stdio.h>
#include "queue.h"

int main (void)
{
	Queue s1,s2;
//	s1.front=0;
//	s1.rear=0;
	initQueue(&s1,100,sizeof(int));
	initQueue(&s2,10,sizeof(double));
	{
	int i,re;
	i=100;
	push(&s1,&i);
	i=200;
	push(&s1,&i);
	pop(&s1,&re);
	printf("1st pop() : %d\n", re);
	i=300;
	push(&s1,&i);
	pop(&s1,&re);
	printf("1st pop() : %d\n", re);
	pop(&s1,&re);
	printf("1st pop() : %d\n", re);
	}	
	{
	double d,re;
	d=1.1;
	push(&s2,&d);
	d=2.2;
	push(&s2,&d);
	pop(&s2,&re);
	printf("1st pop() : %f\n", re);
	d=3.3;
	push(&s2,&d);
	pop(&s2,&re);
	printf("1st pop() : %f\n", re);
	pop(&s2,&re);
	printf("1st pop() : %f\n", re);
	}	
	cleanupQueue(&s1);
	cleanupQueue(&s2);
	return 0;
}
