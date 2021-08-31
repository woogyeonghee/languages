#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d",&num);
	
	//int isOdd = (num % 2 ==1);
	int isOdd = num % 2;
	
	printf("num : %d --- isOdd : %d\n", num, isOdd);
	return 0;
}
