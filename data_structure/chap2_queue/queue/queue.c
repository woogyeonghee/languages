#include <stdio.h>

int queue [100];
int front;
int rear;

void push (int data)
{
	queue[rear]=data;
	++rear;

}

int pop (void)
{
	int result =queue[front];
	++front;
	return queue[result];
}


int main (void)
{
	push(100);
	push(200);

	printf("1st pop() : %d\n", pop());

	push(300);

	printf("1st pop() : %d\n", pop());

	printf("1st pop() : %d\n", pop());
	
	return 0;
}
