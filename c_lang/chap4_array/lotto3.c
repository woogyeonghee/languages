#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int balls[45];
	for (int i =0; i<45;++i){
		balls[i]=i+1;
	}

	srand(time(NULL));
	for (int i=0;i<=1000000;++i){
		int left =rand()%45;
		int right = rand()%45;

		int tmp =balls[left];
		balls[left]=balls[right];
		balls[right]=tmp;
	}
	
	for (int i=0; i<7;++i){
		printf("%2d",balls[i]);
	}
	printf("\n");
	return 0;
}
