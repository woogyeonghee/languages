#include <stdio.h>
#include "queue.h"

int main (void)
{
    Queue s1,s2;
//  s1.front=0;
//  s1.rear=0;
    initQueue(&s1,100);
    initQueue(&s2,10);
    
    int i,re;
    push(&s1,100);
    push(&s1,200);
    pop(&s1,&re);
    printf("1st pop() : %d\n", re);
    push(&s1,300);
    pop(&s1,&re);
    printf("1st pop() : %d\n", re);
    pop(&s1,&re);
    printf("1st pop() : %d\n", re);

    push(&s2,400);
    push(&s2,500);
    pop(&s2,&re);
    printf("1st pop() : %d\n", re);
    push(&s2,600);
    pop(&s2,&re);
    printf("1st pop() : %d\n", re);
    pop(&s2,&re);
    printf("1st pop() : %d\n", re);
    
    cleanupQueue(&s1);
    cleanupQueue(&s2);
    return 0;
}
