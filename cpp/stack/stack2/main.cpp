#include <iostream>
#include "stack.h"
using std::cout;
using std::endl;

int main()
{
	Stack s1;		//	Stack s1(100)
	Stack s2(10); // Stack s2 = 10; -> X int형이 Stack타입이 이상함 -> explicit
	Stack s3 = s2;			// Stack은 push pop을 써야하므로 const 사용 불가
	
	s1 = s2;
	//s1 = 10; -> explicit를 사용했으므로 사용 불가
	
	
	if (s1 == s2)
		cout << "s1 and s2 are equal" << endl;
	else
		cout << "s1 and s2 are not equal" << endl;

	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	cout << "s1 1st pop() : " << s1.pop() << endl;
	cout << "s1 2nd pop() : " << s1.pop() << endl;
	cout << "s1 3rd pop() : " << s1.pop() << endl;
	
	return 0;
}
