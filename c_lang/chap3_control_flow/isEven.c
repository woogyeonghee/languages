#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d",&num);

	if (num%2/*==1*/){
	//odd
		printf("%d is a odd number\n",num);	
	}
	else{
	//even
		printf("%d is a even number\n",num);	
	}	
	
	return 0;
}
