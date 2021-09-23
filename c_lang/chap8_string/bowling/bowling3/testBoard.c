#include "board.h"

int main(void)
{
    setFrameScore(1,1,9);
    setFrameScore(1,2,1);
    setFrameScore(2,2,10);

    setFrameScore(9,1,0);
    setFrameScore(9,2,10);

    setFrameScore(10,1,10);
    setFrameScore(10,2,8);
    setFrameScore(10,3,2);

    setScore(1,100);
    setScore(2,99);
    setScore(3,0);
    setScore(9,200);
    setScore(10,300);
    printBoard();
    
    return 0;
}
