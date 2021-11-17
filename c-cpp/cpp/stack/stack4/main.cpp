#include <iostream>
#include "stack.h"
#include "complex.h"

using std::cout;
using std::endl;

int main()
{
    Stack<int> s1;
	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	cout << "s1 1st pop() : " << s1.pop() << endl;
	cout << "s1 2nd pop() : " << s1.pop() << endl;
	cout << "s1 3rd pop() : " << s1.pop() << endl;
	
    Stack<Complex> s2;
	s2.push(Complex(1.0,2.0));
	s2.push(Complex(2.0,3.0));
	s2.push(Complex(3.0,4.0));
	
	cout << "s2 1st pop() : " << s2.pop() << endl;
	cout << "s2 2nd pop() : " << s2.pop() << endl;
	cout << "s2 3rd pop() : " << s2.pop() << endl;
	return 0;
}
