#include <stdio.h>

int add(int a,int b)
{
	return a+b;
}

int substract(int a,int b)
{
	return a-b;
}

int main(void)
{
	int (*fp)(int,int);
	
	fp = &add; //fp=add;
	int re = (*fp)(4,3);
	printf("re : %d\n",re);

	fp = &substract; //fp=add;
	re = (*fp)(4,3);
	printf("re : %d\n",re);
	return 0;
}
