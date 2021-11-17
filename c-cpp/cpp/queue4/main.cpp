#include "queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    
    Queue<int> q1;
	q1.push(100);
	q1.push(200);
	q1.push(300);
	
	cout << "q1 1st pop() : " << q1.pop() << endl;
	cout << "q1 2nd pop() : " << q1.pop() << endl;
	cout << "q1 3rd pop() : " << q1.pop() << endl;
    
    Queue<Complex> q2;
    q2.push(Complex(1.0,2.0));
    q2.push(Complex(2.0,3.0));
    q2.push(Complex(3.0,4.0));
    
    cout << "q2 1st pop() : " << q2.pop() << endl;
    cout << "q2 2nd pop() : " << q2.pop() << endl;
    cout << "q2 3rd pop() : " << q2.pop() << endl;
	
	
	return 0;
}

/*
int main()
{
	Queue q1;
	Queue q2(100);
	
	Queue q3 = q2;
	
	q1 = q2;
	
	if (q1 == q2)
		cout << "q1 and q2 are equal" << endl;
	else
		cout << "q1 and q2 are not equal" << endl;
	
	q1.push(100);
	q1.push(200);
	q1.push(300);
	
	int re;
	cout << "q1 1st pop() : " << q1.pop(re) << endl;
	cout << "q1 2nd pop() : " << q1.pop(re) << endl;
	cout << "q1 3rd pop() : " << q1.pop(re) << endl;
	cout << " re : " << re << endl;
	q2.push(900);
	q2.push(800);
	q2.push(700);

	cout << "q2 1st pop() : " << q2.pop(re) << endl;
	cout << "q2 2nd pop() : " << q2.pop(re) << endl;
	cout << "q2 3rd pop() : " << q2.pop(re) << endl;
	
	return 0;
}
*/
