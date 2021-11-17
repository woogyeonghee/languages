#include <stdio.h>

int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d",&score);

	if (score >=90)
		//A
		printf("score : %d----grade :A\n",score);
	else if (score >= 80)//&&score < 90 x
		//B
		printf("score : %d----grade :B\n",score);
	else if (score >= 70)
		//C
		printf("score : %d----grade :C\n",score);
	else if (score >= 60)
		//D
		printf("score : %d----grade :D\n",score);
	else
		//F
		printf("score : %d----grade :F\n",score);

	return 0;
}
