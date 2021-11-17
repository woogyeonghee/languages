#ifndef QUEUE_H
#define QUEUE_H
typedef struct
{
	int front;
	int array[50];
	int rear;
}Queue;

void push (Queue *ps,int data);

int pop (Queue *ps);

#endif
