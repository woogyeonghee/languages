#include <stdio.h>

int main(void)
{
	int nums[10]={32,43,54,33,44,66,77,88,99,11};
//	int nums[10]={0} all elements are 0
	int max =nums[0];
	for (int i=1;i<10;++i){
		if (max<nums[i]){
			max=nums[i];
		}
	}
	


	printf("max: %d\n",max);
	return 0;
}
