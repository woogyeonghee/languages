#include <stdio.h>

int main(void)
{
	int k;
	for (int i=1;i<=5;++i){
		for(int j=1;j<=5;++j){
			printf((i==j||i+j==6)?"*":" ");
		}
		printf("\n");
	}
	return 0;
}
