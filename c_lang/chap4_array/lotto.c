#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto[7];

	srand(time(NULL));
	int i;
	
	lotto[0] = rand() % 45 +1;
	for(i=0;i<7;++i){
		lotto[i+1] = rand() % 45 +1;
		if(lotto[i]==lotto[i+1]){
			--i;
		}
	}
	for(i=0;i<7;++i){
		printf("%d ",lotto[i]);
	}
	printf("\n");
	return 0;
}
