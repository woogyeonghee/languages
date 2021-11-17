#include<stdio.h>
#include<time.h>
#include"rand.h"


int main(void)
{
	my_srand(time(NULL));

	for (int i = 1;i<=10;++i)
	{
		int num=my_rand();
		printf("%d\n",num);
	}
	return 0;
}

