#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"
void initStack(Stack *ps,int size)
{
	ps->pArr=malloc(sizeof(int)*size);
	assert(ps->pArr);
	
	ps->size=size;
	ps->tos=0;
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}

void push (Stack *ps,int data)
{
	assert(ps->tos!=ps->size);
	ps->pArr[ps->tos]=data;
	++ps->tos;
}
/*
int pop (Stack *s)
{
	assert(s->tos!=0);
	--s->tos;
	return s->pArr[s->tos];
}
*/
void pop (Stack *ps, int *pData)
{
	assert(ps->tos !=0);

	--ps->tos;
	*pData= ps->pArr[ps->tos];
}
