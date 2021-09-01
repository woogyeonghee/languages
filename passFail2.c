#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d",&score);
/*
	if (score>=60) {
	// pass
		printf("score : %d---pass\n",score);
	}
	else {
	//fail
		printf("score : %d---fail\n",score);
	}
*/

	printf("score : %d---%s\n",score,(score >= 60) ? "pass" : "fail");
	return 0;
}
