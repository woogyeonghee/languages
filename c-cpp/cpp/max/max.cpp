#include <stdio.h>

#define MAX(a,b) (((a)>(b))? (a):(b))

inline int findMax(int a,int b)
{
    return (a>b)?a:b;
}

int main(void)
{
    int a=100;
    int b=200;

    //int max=MAX(a,b);
    //int max=MAX(a,b);
    int max=findMax(a,b);

    printf("max : %d\n",max);
    return 0;
}

