#include <stdio.h>

int main(void)
{ 
	int man,woman;
	printf("input #man #woman : ");
	scanf("%d %d", &man, &woman);
	
	
	double manRatio = static_cast<double>man / (man + woman) * 100;
	double womanRatio = static_cast<double>woman / (man + woman) * 100;
	//double womanRatio = (double)woman / (double)(man + woman) * (double)100;
	printf("manRatio : %.2f\twomanRatio : %.2f\n",manRatio,womanRatio);
	return 0;
}
