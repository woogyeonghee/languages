#include <stdio.h>

int a;
int b;


void swap(void)
{
	int tmp=a;
	a=b;
	b=tmp;
}



int main(void)
{

	a=100;
	b=200;

	printf("a:%d\nb: %d\n",a,b);
	
	swap();

	printf("a:%d\nb: %d\n",a,b);

	return 0;
}
