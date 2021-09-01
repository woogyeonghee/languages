#include <stdio.h>

int main(void)
{
	int kor,eng,mat;
	printf("input kor eng mat : ");
	scanf("%d %d %d",&kor,&eng,&mat);
	
	int sum = kor+eng+mat;
	double average = (double)sum / 3.0;

	printf("sum : %d\taverage : %.2f\n", sum, average);
	return 0;
}
