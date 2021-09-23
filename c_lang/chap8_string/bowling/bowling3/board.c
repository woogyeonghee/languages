#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include <string.h>

static char scoreBoard[7][45] = {
    " ----------------------------------------- \n",
    "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |  10 |\n",
    "------------------------------------------ \n",
    "| | | | | | | | | | | | | | | | | | | | | |\n",
    " ----------------------------------------- \n",
    "|   |   |   |   |   |   |   |   |   |     |\n",
    " ----------------------------------------- \n",
};

void setFrameScore(int frame,int cast,int score)
{
    if(frame<10)
    {
        if(cast==1 && score==10)
        {
            scoreBoard[3][1+(frame-1)*4+(cast-1)*2]='X';  
        }
        else if(cast==2 && (scoreBoard[3][1+(frame-1)*4]-'0') +score==10)
        {
            scoreBoard[3][1+(frame-1)*4+(cast-1)*2]='/';  
        }
        else
        {
            scoreBoard[3][1+(frame-1)*4+(cast-1)*2]=score+'0';
        }
    }
    else
    {
        if(score==10)
        {
            if( cast !=2||cast==2&& scoreBoard[3][1+(10-1)*4]!='0')
            {
                scoreBoard[3][1+(frame-1)*4+(cast-1)*2]='X';  
            }
        }
        else if (cast==2 && (scoreBoard[3][1+(10-1)*4]-'0')+score==10 && scoreBoard[3][1+(10-1)*4]!='X'
                || cast==3&& (scoreBoard[3][1+(10-1)*4+2]-'0')+score==10 && scoreBoard[3][1+(10-1)*4+2]!='X')
        {
            scoreBoard[3][1+(frame-1)*4+(cast-1)*2]='/';  
        }
        else
        {
            scoreBoard[3][1+(frame-1)*4+(cast-1)*2]=score+'0';

        }
    }
}

void setScore(int frame,int score)
{
    char buf[10];
    sprintf(buf,"%3d",score);
    strncpy(&scoreBoard[5][1+(frame-1)*4],buf,3);
}


void printBoard(void)
{
    system("clear");
    for (int i = 0; i < 7; ++i) {
        printf("%s", &scoreBoard[i][0]);                // 시작주소를 가리킴 scoreBoard[i]도 가능
    }
}
