#include "list.h"
// C -> C++ Linked_list
int main() 
{
	List list;	
	//list.initList();
	
	list.insertFirstNode(4);
	list.insertFirstNode(3);
	list.insertFirstNode(1);
	list.insertNode(1, 2);
	list.deleteNode(3);
	
	list.print();
	
	//list.cleanupList();
	return 0;
}	
