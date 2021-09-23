#include <iostream>
#include "safeArray.h"
using std::cout;
using std::endl;

int main()
{
	SafeArray arr1;
	SafeArray arr2(10);			
	
	int nums[] = {1, 2, 3, 4, 5};
	const SafeArray arr3(nums, 5);
	const SafeArray arr4 = arr3;
	
	if (arr3 == arr4)
		cout << "arr3 and arr4 are equal" << endl;
	else
		cout << "arr3 and arr4 are not equal" << endl;
	
	for (int i = 0; i < arr3.size(); ++i) {
		cout << arr3[i] << " ";				
	}
	cout << endl;
	
	Array arr5(10);					// Array arr5(10)은 잘 작동 되나 SafeArray arr5(10)은 바운더리 침범으로 인해 사용불가
	//SafeArray arr5(10);
	arr5[10] = 1;
	
	
	return 0;
}
