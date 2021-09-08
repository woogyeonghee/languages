#include <stdio.h>
#include "queue.h"

int main (void)
{
    Queue s1,s2;
//  s1.front=0;
//  s1.rear=0;
    initQueue(&s1,5);
    
    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    
    int re;
    pop(&s1,&re);   printf("pop(): %d\n",re);
    pop(&s1,&re);   printf("pop(): %d\n",re);
    pop(&s1,&re);   printf("pop(): %d\n",re);

    push(&s1,5);
    push(&s1,6);
    pop(&s1,&re);   printf("pop(): %d\n",re);
    pop(&s1,&re);   printf("pop(): %d\n",re);
    pop(&s1,&re);   printf("pop(): %d\n",re);
    
    cleanupQueue(&s1);
    return 0;
}
