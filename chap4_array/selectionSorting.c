#include <stdio.h>

int main(void)
{
	int nums[10]={32,43,54,33,44,66,77,88,99,11};
/*	
	for (int i=0;i<10-1;++i	){
		for( int j= i+1; j<10;++j){
			if(nums[i]>nums[j]){
			int temp = nums[i];
			nums[i]=nums[j];
			nums[j]=temp;
			}
		}
	}
*/	
	for (int i=0;i<10-1;++i	){
		int minIndex=i;
		for( int j= i+1; j<10;++j){
			if(nums[minIndex]>nums[j]){
				minIndex=j;
			}
		}
		int temp = nums[i];
		nums[i]=nums[minIndex];
		nums[minIndex]=temp;
	}

	for (int i=0;i<10;++i){
		printf("%d ",nums[i]);
	}
	printf("\n");


	return 0;
}
