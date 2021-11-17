#include <stdio.h>
// 배열의 합을 구하는 함수

//int sumArray(const int *pArr, int size)				// const -> 읽기전용
int sumArray(int pArr[], int size)		// pArr[]은 포인터임	
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += pArr[i];					// *(pArr + i) 배열식은 포인터 식으로 포인터 식은 배열식으로
	}	
	
	return sum;
}

int main(void)
{
	int nums[10] = {50, 90, 40, 100, 10, 20, 60, 70, 80, 30};
	// 배열 이름은 식에 사용되면 첫번째 엘리먼트의 시작 주소를 의미한다.
	int sum = sumArray(nums, 10);				// int sum = sumArray(&nums[0]);
	//int sum = sumArray(nums + 5, 5);				// 배열의 시작 주소가 nums[5]인 20부터 시작해서 30까지만 더함
	
	printf("sum : %d\n", sum);
	return 0;
}
