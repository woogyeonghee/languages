#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	int answer[3];
	srand(time(NULL));
	
	question[0] = rand() % 9+1;

	do{
		question[1] = rand() % 9+1;
	}
	while(question[0]==question[1]);

	do{
		question[2] = rand() % 9+1;
	}
	while(question[0]==question[2]||question[0]==question[2]);

	printf("%d %d %d\n",question[0],question[1],question[2]);
	int strike,ball;
	int count=0;
	while(1){
		++count;
		strike =0;
		ball =0;
		scanf("%d %d %d",&answer[0],&answer[1],&answer[2]);
		printf("answer: ");
		
		for(int i =0;i<3;++i){
			for(int j=0;j<3;++j){
				if (question[i]==answer[j]){
					if(i==j){
						++strike;
					}
					else{
						++ball;
					}
				}
			}
		}
		

		printf("#strike: %d #ball: %d\n", strike,ball);
		if(strike ==3)
			break;	
	}
	
	printf("congraturation your count : %d\n", count);
	return 0;
}
