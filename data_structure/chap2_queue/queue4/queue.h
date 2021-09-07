#ifndef QUEUE_H
#define QUEUE_H
typedef struct
{
	int front;
	int *pArr;
	int size;
	int rear;
}Queue;


void initQueue(Queue *ps,int size);
void cleanupQueue(Queue *ps);

void push (Queue *ps,int data);

void pop (Queue *ps,int *pData);

#endif
