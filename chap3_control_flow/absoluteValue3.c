#include <stdio.h>

int main(void)
{
	int num;
	printf("input num: ");
	scanf("%d", &num);
/*
	int result;

	if (num >=0) {
		result =num;
	}
	else {
		result =-num;
	}	
*/
	int result = (num>=0) ? num : -num;//c programing  
	
	printf("absolut value : %d\n",result);
	return 0;
}
