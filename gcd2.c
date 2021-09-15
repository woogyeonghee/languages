#include <stdio.h>

int findgcd(int a,int b)
{

    do{
        int remain=a%b;
        a=b;
        b=remain;
    }while (b);
    
    return a;
}

int main(void)
{
    int a,b;
    printf("input 2 nums: ");
    scanf("%d %d",&a,&b);

    int gcd=findgcd(a,b);

    printf("greatest common dividor: %d\n",gcd);

    return 0;
}
