#ifndef STACK_H
#define STACK_H
#define array_size 100

typedef struct
{
	int array[array_size];
	int tos;
}Stack;

void initStack(Stack *ps);

void push(Stack *ps,int data);
int pop(Stack *ps);

#endif
