#include <stdio.h>

int main(void)
{
	// 1번 프레임에 1번 값을 넣기위해 0번의 배열을 사용하지 않고 1번 배열부터 사용하기 위해 + 1
	int score[10+1] = {0, };						// 누적시키는 점수
	
	// 1 ~ 9 
	int frameScore[9+1][2+1] = {0, };				// 1 ~ 9, 두번씩 투구
	for (int i = 1; i <=9; ++i) {
		// first cast
		printf("%d frame first cast : ", i);
		scanf("%d", &frameScore[i][1]);
		
		// find score 현재 프레임에서 점수가 나오는 것이 아닌 첫번째 투구를 했을 때 점수가 나온 경우
		// 1) (i - 1) == spare	--> (i -1) frame score
		if (i >= 2 && frameScore[i-1][1] != 10 && frameScore[i-1][1] + frameScore[i-1][2] == 10) {
			score[i-1] = score[i-2] + 10 + frameScore[i][1];			// 누적 시켜서 더함, 0 프레임이 0으므로 누적시켜도 상관X
			printf("%d frame score : %d\n", i-1, score[i-1]);
		} else if (i >= 3 && frameScore[i-2][1] == 10 && frameScore[i-1][1] == 10) {
		// 2) (i - 2) == strike, (i - 1) == strike --> (i - 2) frame score		
			score[i-2] = score[i-3] + 10 + (10 + frameScore[i][1]);
			printf("%d frame score : %d\n", i-2, score[i-2]);
		}
		
		if (frameScore[i][1] != 10) {					// first case != 10
			printf("%d frame second cast : ", i);
			scanf("%d", &frameScore[i][2]);			// second cast
			
			// find score	두번째 투구를 했을 때 점수가 나온 경우
			if (i >= 2 && frameScore[i-1][1] == 10) {
				// 1) i - 1 == strike -> i - 1 frame score
				score[i-1] = score[i-2] + 10 + (frameScore[i][1] + frameScore[i][2]);
				printf("%d frame score : %d\n", i-1, score[i-1]);
			}
			
			if (frameScore[i][1] + frameScore[i][2] < 10) {
			//	2) i score < 10 --> i frame score
				score[i] = score[i-1] + frameScore[i][1] + frameScore[i][2];
				printf("%d frame score : %d\n", i, score[i]);
			}
		}
	}
	
	// 10
	int frameScore10[3+1] = {0, };					
	// 10번, 3번 투구, 2번까지는 무조건 투구, 3번째 투구는 첫번째 두번째 투구의 합이 10점 이상이면 보너스 점수
	
	printf("%d frame first cast : ", 10);
	scanf("%d", &frameScore10[1]);
	
	if (frameScore[9][1] != 10 && frameScore[9][1] + frameScore[9][2] == 10) {
		score[9] = score[8] + 10 + frameScore10[1];
		printf("%d frame score : %d\n", 9, score[9]);
	} else if (frameScore[8][1] == 10 && frameScore[9][1] == 10) {
		score[8] = score[7] + 10 + (10 + frameScore10[1]);
		printf("%d frame score : %d\n", 8, score[8]);
	}
	
	printf("%d frame second cast : ", 10);
	scanf("%d", &frameScore10[2]);
	
	if (frameScore[9][1] == 10) {
		score[9] = score[8] + 10 + (frameScore10[1] + frameScore10[2]);
		printf("%d frame score : %d\n", 9, score[9]);
	}
	
	if (frameScore10[1] + frameScore10[2] < 10) {
		score[10] = score[9] + frameScore10[1] + frameScore10[2];
		printf("%d frame score : %d\n", 10, score[10]);
	} 
	
	if (frameScore10[1] + frameScore10[2] >= 10) {			// 보너스 투구
		printf("%d frame third cast : ", 10);
		scanf("%d", &frameScore10[3]);
		
		score[10] = score[9] + frameScore10[1] + frameScore10[2] + frameScore10[3];
		printf("%d frame score : %d\n", 10, score[10]);
	}
	/*
	if (frameScore10[1] + frameScore10[2] >= 10) {			// 보너스 투구
		// 10 프레임의 첫번째 두번째 투구의 합이 10 이상일 때 --> 3번째 프레임의 점수가 보너스
		
		
		printf("%d frame third cast : ", 10);
		scanf("%d", &frameScore10[3]);
		
		score[8] = score[7] + frameScore[9][1] + 10 + frameScore10[1];
		printf("%d frame score : %d\n", 8, score[8]);
		score[9] = score[8] + frameScore10[1] + 10 +frameScore10[2];
		printf("%d frame score : %d\n", 9, score[9]);
		score[10] = score[9] + frameScore10[2] + 10 + frameScore10[3];
		printf("%d frame score : %d\n", 10, score[10]);
		
	}
	else if (frameScore10[1] + frameScore10[2] < 10) {
		score[8] = score[7] + frameScore[9][1] + 10 + frameScore10[1];
		printf("%d frame score : %d\n", 8, score[8]);
		score[9] = score[8] + frameScore10[1] + 10 +frameScore10[2];
		printf("%d frame score : %d\n", 9, score[9]);
		
		score[10] = score[9] + frameScore10[1] + frameScore10[2];
		printf("%d frame score : %d\n", 10, score[10]);
	}*/
		
	return 0;
}	
