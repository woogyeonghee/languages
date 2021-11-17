#include "queue.h"

static int queue [100];
static int front;
static int rear;

void push (int data)
{
    queue[rear]=data;
    ++rear;
}

int pop (void)
{
    int result =queue[front];
    ++front;
    return result;
}
