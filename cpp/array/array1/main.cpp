#include <iostream>
#include "array.h"
using std::cout;
using std::endl;
// 치환, 사이즈 -> 한번에 묶어서 비교
int main()
{
	Array arr1;
	Array arr2(10);			// Array arr2 = 10; X 인자가 한개있는것은 변환생성자, explicit를 써서 묵시적으로 바꾸는 것을 막을 수 있음
	
	int nums[] = {1, 2, 3, 4, 5};
	const Array arr3(nums, 5);
	const Array arr4 = arr3;
	
	if (arr3 == arr4)
		cout << "arr3 and arr4 are equal" << endl;
	else
		cout << "arr3 and arr4 are not equal" << endl;
	
	for (int i = 0; i < arr3.size(); ++i) {
		cout << arr3[i] << " ";									// arr3[i] == arr3.operator[](i)
	}
	
	cout << endl;
	
	return 0;
}
