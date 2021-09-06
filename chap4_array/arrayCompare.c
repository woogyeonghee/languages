#include <stdio.h>

int main(void)
{
	int nums1[]={1,2,3,4,5};
	int nums2[5];
	int i;
	for (i =0;i<5;++i)
	{
		if(nums1[i]!=nums2[i])
			break;
	}


	if(i==5)
		printf("equal\n");
	else
		printf("not equal\n");

	return 0;

