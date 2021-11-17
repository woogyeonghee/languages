#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d",&num);
/*
	if (num%2){
	//odd
		printf("%d is a odd number\n",num);	
	}
	else{
	//even
		printf("%d is a even number\n",num);	
	}	
*/
	printf("%d is a %s number.\n" ,num , (num %2)?"odd" : "even");
	return 0;
}
