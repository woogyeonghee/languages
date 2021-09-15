#include <stdio.h>

int gcd(int a,int b)
{
    int gcd;
    int i,j;
    if(a>b)
    {
        i=a;
        j=b;
    }
    else if(b>a)
    {
        i=b;
        j=a;
    }
    else
        return a;

    while(1)
    {
        i=i%j;
        if(i==0)
        {    
            gcd=j;
            break;
        }
        j=j%i;
        if(j==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;

}

int main(void)
{
    int a,b;
    printf("input 2 nums: ");
    scanf("%d %d",&a,&b);

    int gc=gcd(a,b);

    printf("greatest common dividor: %d\n",gc);

    return 0;
}
