#include "queue.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void initQueue(Queue *ps,int size)
{
    ps->pArr=malloc(sizeof(int)*size);
    assert(ps->pArr);
    ps->size=size;
    ps->rear=0;
    ps->front=0;
}


void cleanupQueue(Queue *ps)
{
    free(ps->pArr);

}

void push (Queue *ps,int data)
{
    assert(ps->rear!=ps->size);
    //ps->array[ps->rear]=data;
    ps->pArr[ps->rear]=data;
    ++ps->rear;
}


void pop (Queue *ps,int *pData)
{
    assert(ps->front!=ps->rear);
    //int result =ps->array[ps->front];
    *pData=ps->pArr[ps->front];
    ++ps->front;
}
