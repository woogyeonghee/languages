#include <stdio.h>

int main(void)
{
//	int score1,score2,score3,score4,score5;
	int scores[5];

//	scanf("%d",&score1);
//	scanf("%d",&score2);
	for(int i=0;i<(sizeof(scores)/sizeof(scores[0]));++i)
		scanf("%d",&scores[i]);

//	int sum = score1+score2+score3+score4+score5;
	int sum=0;
	for(int i=0;i<(sizeof(scores)/sizeof(scores[0]));++i)
		sum= sum +scores[i];

	double average = (double)sum / 5;

	printf("sum: %d\taverage: %.2f\n",sum,average);

	return 0;
}
