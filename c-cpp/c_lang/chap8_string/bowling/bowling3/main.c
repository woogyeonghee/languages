#include <stdio.h>
#include "board.h"

int main(void)
{
    int score[11] = {0, };
    int frameScore[11][3] = {0, };
    
    printBoard();
    // 1 ~ 10 -> 1 , 2
    for (int i = 1; i <= 10; ++i) {
        printf("%d frame first cast : ", i);
        scanf("%d", &frameScore[i][1]);
        setFrameScore(i,1,frameScore[i][1]);
        printBoard();

        if (i >= 2 && frameScore[i-1][1] != 10 && frameScore[i-1][1] + frameScore[i-1][2] == 10) {
            score[i-1] = score[i-2] + 10 + frameScore[i][1];          
            //printf("%d frame score : %d\n", i-1, score[i-1]);
            setScore(i-1,score[i-1]);
            printBoard();
        } else if (i >= 3 && frameScore[i-2][1] == 10 && frameScore[i-1][1] == 10) {
        // 2) (i - 2) == strike, (i - 1) == strike --> (i - 2) frame score      
            score[i-2] = score[i-3] + 10 + (10 + frameScore[i][1]);
            setScore(i-2,score[i-2]);
            printBoard();
        }
        
        if (frameScore[i][1] != 10 || i == 10) {                    // first case != 10, 10번 투구는 스트라이크일 경우 무조건 2번째 투구
            printf("%d frame second cast : ", i);
            scanf("%d", &frameScore[i][2]);         // second cast
            setFrameScore(i,2,frameScore[i][2]);
            printBoard();
            // find score   두번째 투구를 했을 때 점수가 나온 경우
            if (i >= 2 && frameScore[i-1][1] == 10) {
                // 1) i - 1 == strike -> i - 1 frame score
                score[i-1] = score[i-2] + 10 + (frameScore[i][1] + frameScore[i][2]);
                //printf("%d frame score : %d\n", i-1, score[i-1]);
                setScore(i-1,score[i-1]);
                printBoard();
            }
            
            if (frameScore[i][1] + frameScore[i][2] < 10) {
            //  2) i score < 10 --> i frame score
                score[i] = score[i-1] + frameScore[i][1] + frameScore[i][2];
                //printf("%d frame score : %d\n", i, score[i]);
                setScore(i,score[i]);
                printBoard();
            }
        }
    }

    int bonus;                      // 10 -> 3
    if (frameScore[10][1] + frameScore[10][2] >= 10) {          // 보너스 투구
        printf("%d frame third cast : ", 10);
        scanf("%d", &bonus);
        setFrameScore(10,3,bonus);
        printBoard();

        score[10] = score[9] + frameScore[10][1] + frameScore[10][2] + bonus;
        printf("%d frame score : %d\n", 10, score[10]);
        setScore(10,score[10]);
        printBoard();
    }

    return 0;
}   
