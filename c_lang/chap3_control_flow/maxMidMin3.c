#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("input number : ");
	scanf("%d %d %d" ,&a,&b,&c);

	int max,mid,min;

	if(a>b){
		max=a;
		min=b;
	}	
	else{
		max=b;
		min=a;
	}
	
	if(c>max){
		mid=max;
		max=c;
	}
	else if(c>min){
		mid=c;
	}
	else{
		min=c;
	}	
	
	printf("max : %d, mid : %d, min : %d\n",max,mid,min);
	
	return 0;
}
