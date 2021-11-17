#include <stdio.h>

int main(void)
{
	int k;
	for (int i=1;i<=5;++i){
		k=5%i;
		for(int j=1;j<=k;++j){
			printf(" ");
		}
		printf("*");
		for(int j=2;j<=4-2*k;++j){
			printf(" ");
		}
		if(i!=3)
			printf("*");
		
		printf("\n");
	}
	return 0;
}
