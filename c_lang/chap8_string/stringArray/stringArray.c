#include <stdio.h>
void printStringArray1(const char **pArr,int size)
{
    for(int i=0;i<size;++i)
    {
        printf("%s\n",pArr[i]);
    }
}

void printStringArray2(char (*pArr)[20],int size)
{
    for(int i=0;i<size;++i)
    {
        printf("%s\n",&pArr[i][0]);
    }
}

int main(void)
{
    const char * cities1[]={
        "seoul", "los angeles", "rio de janeiro", "Daejun", "paris"
    };
    printStringArray1(cities1,5);
    char cities2[][20]={
        "seoul", "los angeles", "rio de janeiro", "Daejun", "paris"
    };
    printStringArray2(cities2,5);
    return 0;
}
