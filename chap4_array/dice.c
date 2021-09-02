#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	
	for (int i= 1; i<=10;++i){
		int dice = rand() % 6+1;
		printf("%d\n",dice);
	}
	
	return 0;
}
