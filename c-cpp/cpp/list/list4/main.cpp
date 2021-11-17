#include <iostream>
#include "list.h"
// C -> C++ Linked_list
int main() 
{
	List list;	
	
	list.insertFirstNode(4);
	list.insertFirstNode(3);
	list.insertFirstNode(1);
	list.insertNode(1, 2);
	list.deleteNode(3);
	
	//list.print();
	std::cout << list;
	
	List list2 = list;
	list2 = list;
	
	if (list == list2)
		std::cout << "list and list2 are equal" << std::endl;
	else
		std::cout << "list and list2 are not equal" << std::endl;
		
	return 0;
}	
