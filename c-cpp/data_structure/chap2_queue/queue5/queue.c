#include "queue.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void initQueue(Queue *ps,int size, int eleSize)
{
    ps->pArr=malloc(eleSize*size);
    assert(ps->pArr);

    ps->eleSize=eleSize;
    ps->size=size;
    ps->rear=0;
    ps->front=0;
}


void cleanupQueue(Queue *ps)
{
    free(ps->pArr);

}

void push (Queue *ps,const void *pData)
{
    assert(ps->rear!=ps->size);
    //ps->array[ps->rear]=data;
    memcpy((unsigned char *)ps->pArr + ps->rear*ps->eleSize,pData,ps->eleSize);
    ++ps->rear;
}


void pop (Queue *ps,void *pData)
{
    assert(ps->front!=ps->rear);
    //int result =ps->array[ps->front];
    memcpy(pData,(unsigned char *)ps->pArr +ps->front*ps->eleSize,ps->eleSize);
    ++ps->front;
}
