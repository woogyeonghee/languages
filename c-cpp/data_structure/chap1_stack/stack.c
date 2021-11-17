#include <stdio.h>

int stack[100];
int tos;

void push(int data)
{
	stack[tos]=data;
	++tos;
}

int pop(void)
{
	--tos;
	return stack[tos];
}


int main (void)
{
	push(100);
	push(200);
	push(300);

	printf("1st pop(): %d\n",pop());
	printf("2st pop(): %d\n",pop());
	printf("3st pop(): %d\n",pop());


	return 0;
}
