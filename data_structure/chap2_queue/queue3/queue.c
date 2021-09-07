#include "queue.h"


void push (Queue *ps,int data)
{
	ps->array[ps->rear]=data;
	++ps->rear;
}

int pop (Queue *ps)
{
	int result =ps->array[ps->front];
	++ps->front;
	return result;
}
