#include <stdio.h>

int main(void)
{ 
	int man,woman;
	printf("input #man #woman : ");
	scanf("%d %d", &man, &woman);
	
	//double manRatio = 1.0 * man / (man + woman) * 100;
	//double womanRatio = (0.0 + woman) / (man + woman) * 100;
	
	double manRatio = (double)man / (man + woman) * 100;
	double womanRatio = (double)woman / (man + woman) * 100;
	//double womanRatio = (double)woman / (double)(man + woman) * (double)100;
	printf("manRatio : %.2f\twomanRatio : %.2f\n",manRatio,womanRatio);
	return 0;
}
