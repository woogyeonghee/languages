#include <stdio.h>
// 함수에서 포인터로 인자전달 하는 프로그램

/*
void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	
	return;				// void일 경우 생략 또는 return; 가능
}	
*/

void swap(int *pa, int *pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main(void)
{
	int a = 100;
	int b = 200;
	
	printf("a : %d\tb : %d\n", a, b);
	
	//swap(a, b);
	swap(&a, &b);						// 주소값을 포인터로 복사

	printf("a : %d\tb : %d\n", a, b);
	
	return 0;
}
