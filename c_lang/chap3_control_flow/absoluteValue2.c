#include <stdio.h>

int main(void)
{
	int num;
	printf("input num: ");
	scanf("%d", &num);

	int result;
	if (num >=0) {
		result =num;
	}
	else {
		result =-num;
	}	

	
	printf("absolut value : %d\n",result);
	return 0;
}
