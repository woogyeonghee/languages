#include <iostream>
#include "complex.h"
#include "list.h"

int main() 
{
	List<int> list;	
	
	list.insertFirstNode(4);
	list.insertFirstNode(3);
	list.insertFirstNode(1);
	list.insertNode(1, 2);
	list.deleteNode(3);
	
	std::cout << list;
	
	List<Complex> list2;
		
	list2.insertFirstNode(Complex(1.0,2.0));
	list2.insertFirstNode(Complex(2.0,3.0));
	list2.insertFirstNode(Complex(3.0,4.0));
	list2.insertNode(Complex(1.0,2.0),Complex(4.0,5.0));
	list2.deleteNode(Complex(3.0,4.0));
	
	std::cout << list2;

	return 0;
}	
