#include <stdio.h>

int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d",&score);

	char grade;

	if (score >=90)
		grade ='A';
		//A
	else if (score >= 80)//&&score < 90 x
		grade ='B';
		//B
	else if (score >= 70)
		grade ='C';
		//C
	else if (score >= 60)
		grade ='D';
		//D
	else
		grade ='F';
		//F

	printf("score : %d----grade :%c\n",score,grade);
	return 0;
}
