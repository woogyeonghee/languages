#include <stdio.h>

int main(void)
{
	int nums[]={1,2,3,4,5};
	int *p;

	p=nums; //p = &nums[0]


	for (int i=0; i<=5;++i)
	{
		printf("*p : %d\n",*p);	
		++p;
	}

	
	p=nums;
	for (int i =0;i<5;++i)
	{
		printf("*(p+%d) : %d\n",i,*(p+i));
	}
	
	return 0;
}
