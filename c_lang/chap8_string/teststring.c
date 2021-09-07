#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 ="hello";
	char s2[10]="greeting";

	printf("S1 len: %lu\n",strlen(s1));
	printf("S2 len: %lu\n",strlen(s2));

	strcpy(s2,s1);
	printf("s1: %s\n",s1);
	printf("s2: %s\n",s2);
	
	if(strcmp(s1,s2)==0)
		printf("s1 and s2 are equal\n");
	else
		printf("s1 and s2 are not equeal\n");
	
	char s3[50];
	strcpy(s3,"Just the way u are");
	strcat(s3," - ");
	strcat(s3,"Billy Joel");
	
	printf("s3 : %s\n",s3);	
	return 0;
}

