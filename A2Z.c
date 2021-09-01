#include <stdio.h>

int main(void)
{
	int i;
	
	i='A';

	while(i <= 'Z'){
		printf("%c",i);
		++i;
	}
	printf("\n");
	return 0;
}
