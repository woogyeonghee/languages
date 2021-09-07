#include <stdio.h>

long long power(int base, int exponent) 
{
	long long result = 1LL;
	
	for (int i = 1; i <= exponent; ++i) {
		result *= base ;					//result = result * base;
	}
	
	return result;
}

int main(void)
{
	for (int i = 0; i <= 32; ++i) {				// int = 2^31
		long long re = power(2, i);
		printf("2 power of %d = %lldLL\n", i , re);
	}	
	
	return 0;
}
