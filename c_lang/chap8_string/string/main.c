#include <stdio.h>
#include "string.h"
int main(void)
{
	char *title="just the way u r";
	char *singer="Billy Joel";
	
	printf("title len :%d\n",my_strlen(title));
	printf("singer len :%d\n",my_strlen(singer));

	if(my_strcmp(singer,"Bruno Mars")==0)
		printf("singer is Bruno Mars\n");
	else
		printf("singer is not Bruno Mars\n");


	char str[50];
	my_strcpy(str,title);
	my_strcat(str," - ");
	my_strcat(str,singer);

	printf("str: %s\n",str);

	return 0;
}
