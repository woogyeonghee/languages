#include <stdio.h>

int main(void)
{
	int i =100;
	double d=3.1415;
	
	{
	void *p;
	p= &i;
	*(int*)p=200;
	}

	{
	void *p;
	p= &d;
	*(double*)p=3.144;
	}

	printf("i : %d\n",i);
	printf("d : %f\n",d);

	return 0;
}
