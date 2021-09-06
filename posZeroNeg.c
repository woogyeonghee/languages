#include <stdio.h>
// 음수, 0, 양수를 구분하는 프로그램
int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);

	if (num > 0)		// 조건을 만족하면 1, positive
	{
		printf("%d is a positive number.\n", num);
	}
	else if (num == 0)
	{
		printf("%d is a zero number.\n", num);
	}
	else
	{
		printf("%d is a negative number.\n", num);
	}
	
//	printf("%d is a %s number.\n", num, 
//		(num > 0) ? "positive" : (num == 0) ? "zero" : "negative"); 
	return 0;
}
