#include <stdio.h>

int main(void)
{
	for (int i=1;i<=5;++i){
		for(int j = 1 ; i + j <= 6 ;++j){
			printf("*");
		}
		printf("\n");
	}
	
	for (int i=5;i<=1;--i){
		for(int j = 1 ; j <= i ;++j){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
