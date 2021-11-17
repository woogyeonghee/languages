#ifndef STACK_H
#define STACK_H

typedef struct
{
	int *pArr;
	int size;
	int tos;
}Stack;

void initStack(Stack *ps,int size);

void cleanupStack(Stack *ps);
void push(Stack *ps,int data);
void pop (Stack *ps,int *pData);


#endif
