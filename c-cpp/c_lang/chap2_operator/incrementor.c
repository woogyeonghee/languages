#include <stdio.h>

int main(void)
{
	{
		int a = 5;
		int b = ++a;

		printf("a: %d\tb: %d\n",a,b);
	}
	{
		int a = 5;
		int b = a++;
		
		printf("a: %d\tb: %d\n",a,b);
	}
	return 0;
}
