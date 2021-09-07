#include <stdio.h>
#include "stack.h"


int main (void)
{
	Stack s1,s2;
	//s1.tos=0;
	//s2.tos=0;	
	initStack(&s1,100,sizeof(int));
	initStack(&s2,10,sizeof(double));
	{
	int i;
	i=100;
	push(&s1,&i);
	i=200;
	push(&s1,&i);
	i=300;
	push(&s1,&i);

	int re;
	pop(&s1,&re);
	printf("s1 1st pop() : %d\n",re);
	pop(&s1,&re);
	printf("s1 2st pop() : %d\n",re);
	pop(&s1,&re);
	printf("s1 3st pop() : %d\n",re);
	}
	{
	double d;
	d=1.1;
	push(&s2,&d);
	d=2.2;
	push(&s2,&d);
	d=3.3;
	push(&s2,&d);

	double re;
	pop(&s2,&re);
	printf("s2 1st pop() : %f\n",re);
	pop(&s2,&re);
	printf("s2 2st pop() : %f\n",re);
	pop(&s2,&re);
	printf("s2 3st pop() : %f\n",re);
	}
	cleanupStack(&s1);
	cleanupStack(&s2);
	return 0;
}
