#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void initStack(Stack *ps)
{
    ps->tos=0;
}

void push (Stack *s,int data)
{
    if(s->tos==array_size)
    {
        fprintf(stderr,"stack is full.\n");
        exit(1);
    }

    s->array[s->tos]=data;
    ++s->tos;
}

int pop (Stack *s)
{
    if(s->tos==0)
    {
        fprintf(stderr,"stack is empty.\n");
        exit(2);
    }
    --s->tos;
    return s->array[s->tos];
}
