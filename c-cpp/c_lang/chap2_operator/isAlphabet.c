#include <stdio.h>

int main(void)
{
	char ch;
	scanf("%c",&ch);
	
	//int isAlpha = (65 <= ch <= 90); uncorrect
	//int isAlpha = (ch >= 65 && ch <= 90);
	int isAlpha = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');

	printf("%d : %d\n", ch, isAlpha);
	return 0;
}
