#include <stdio.h>

int main(void)
{
	int nums[10]={32,43,54,33,44,66,77,88,99,11};
	
	int sum =0;
	for (int i=0;i<10;i+=2){//optimize but just use it even index 
		sum+=(nums[i]+nums[i+1]);
	}

	printf("sum: %d\n",sum);
	return 0;
}
