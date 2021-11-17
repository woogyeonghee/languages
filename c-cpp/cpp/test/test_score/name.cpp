#include <stdio.h>
// 이름 받기
int main(void)
{
	char name[21];			// %20s의 경우 마지막에 null이 들어가야하므로 21개로 설정 
	scanf("%20s", name);	 // &name[0], %s는 null 문자까지 받는 것
	
	printf("%s\n", name);		// %s는 null문자가 나올 때까지 출력
	return 0;
}
