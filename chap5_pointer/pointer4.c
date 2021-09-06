#include <stdio.h>

int main(void)
{
	int a;
	int *pa;
	int **ppa;
	
	a=100;
	pa=&a;
	ppa=&pa;

	**ppa=200;

	printf("a: %d\n", a);
	return 0;
}
