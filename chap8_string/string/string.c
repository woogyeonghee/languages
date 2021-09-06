
int my_strlen(const char *s)
{
	int count=0;
	while (*s++)
		++count;
	return count;
}

void my_strcpy(char *des,const char *src)
{

	while(*des++=*src++)
		;	
}

void my_strcat(char *des,const char *src)
{
	my_strcpy(des +my_strlen(des),src);
}

int my_strcmp(const char *s1,const char *s2)
{
	while(*s1||*s2)
		if(s1++!=s2++)
			break;
	return *s1-*s2;
}
/*
int my_strlen(const char *s)
{
	int i;
	for (i = 0;s[i] != '\0';++i)
		;

	return i;
}

void my_strcpy(char *des,const char *src)
{
	int i;
	for(int i=0;src[i]!='\0';++i)
		des[i]= src[i];

	des[i]='\0';
}

void my_strcat(char *des,const char *src)
{
	int i;
	for (i=0;des[i]!='\0';++i)
		;
	int j;
	for (j=0;src[j]!='\0';++j)
		des[i+j]=src[j];
	des[i+j]='\0';

	//my_strcpy(des +strlen(des),src);
}

int my_strcmp(const char *s1,const char *s2)
{
	int i;
	for (i=0; s1[i]!='\0'||s2[i]!='\0';++i)
	{
		if(s1[i]!=s2[i])
			break;
	}

	return s1[i]-s2[i];
}
*/
