#ifndef LIST_H
#define LIST_H
#include "node.h"

class List 
{
friend std::ostream& operator<<(std::ostream& out, const List& rhs);

public:	
	List();
	List(const List& rhs);
	~List();

	List& operator=(const List& rhs);

	bool operator==(const List& rhs);
	
//	void print();

	void insertFirstNode(int data);
	void insertNode(int prevData, int data);
	void deleteNode(int data);

private:
	Node *ptr_;
};
#endif
