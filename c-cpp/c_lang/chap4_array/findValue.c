#include <stdio.h>

int main(void)
{
	int nums[10]={32,43,54,33,44,66,77,88,99,11};

	int value;
	printf("input value : ");
	scanf("%d",&value);
	
	int i;

	for (i=0; i<10;++i){
		if(value== nums[i]){
			break;
		}
	}

	if(i<10){
		printf("find value in nums[%d]\n",i);
	}
	else{
		printf("there has no value in nums\n");
	}
			


	return 0;
}
