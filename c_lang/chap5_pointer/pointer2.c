#include <stdio.h>

int main(void)
{
	int a;
	int nums[10];

	int *p;
	
	p=&a;
	p=&nums[1];
	
	*p=100;

	return 0;
}
