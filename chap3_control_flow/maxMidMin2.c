#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("input number : ");
	scanf("%d %d %d" ,&a,&b,&c);
	if(a>b){
		if(c>a){
			printf("max : %d, mid : %d, min : %d\n",c,a,b);
		}
		else if(c>b){
			printf("max : %d, mid : %d, min : %d\n",a,c,b);
		}
		else{
			printf("max : %d, mid : %d, min : %d\n",a,b,c);
		}
	}	
	else{
		if(c>b){
			printf("max : %d, mid : %d, min : %d\n",c,b,a);
		}
		else if(c>a){
			printf("max : %d, mid : %d, min : %d\n",c,b,a);
		}
		else{
			printf("max : %d, mid : %d, min : %d\n",b,a,c);
		}
	}	
	return 0;
}
