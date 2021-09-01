#include <stdio.h>

int main(void)
{
	int year;
	printf("input year: ");
	scanf("%d",&year);
	
	//int isOrdinary = !(year % 4 == 0) && (year % 100 !=0) || (year % 400 == 0);
	int isOrdinary = (year % 4 !=0 || year % 100 == 0 && year % 400 !=0);
	
	printf("%d is a ordinary year : %d\n", year, isOrdinary);
	return 0;
}
