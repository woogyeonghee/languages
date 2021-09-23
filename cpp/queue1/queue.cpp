#include "queue.h"
#include <cassert>
#include <cstdio>

Queue::Queue(int size)
{
    this->pArr=new int[size];
    assert(this->pArr);
    this->size=size;
    this->rear=0;
    this->front=0;
}

Queue::~Queue()
{
    delete []this->pArr;
}

void Queue::push (int data)
{
    assert(this->rear!=this->size);
    //ps->array[ps->rear]=data;
    this->pArr[this->rear]=data;
    ++this->rear;
}


void Queue::pop (int *pData)
{
    assert(this->front!=this->rear);
    //int result =ps->array[ps->front];
    *pData=this->pArr[this->front];
    ++this->front;
}
