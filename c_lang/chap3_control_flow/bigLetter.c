#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c",&ch);

	if (ch>='A' && ch<='Z'){
		printf("%c is a big letter.\n",ch);
	}
	
	return 0;
}
