#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d",&score);

	if (score>=60) {
	// pass
		printf("score : %d---pass\n",score);
	}
	else {
	//fail
		printf("score : %d---fail\n",score);
	
	}

	return 0;
}
