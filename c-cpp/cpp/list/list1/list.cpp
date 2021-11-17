#include <iostream>
#include <cassert>
#include "list.h"

// 반복되는 코드를 줄이기 위해 함수 사용
Node::Node(int data, Node *next)		// createNode -> node생성자
{
	//Node *p = new Node;				//구조체 타입 하나만 주면 되기 때문에 Node로만 줌
	//assert(p );
	//p->data = data;
	//p->next = next;
	//return p;							//생성자는 반환타입 X
	
	this->data = data;
	this->next = next;
}

List::List()
{
	//this->ptr = createNode(-1, NULL);
	this->ptr = new Node(-1, NULL);
	assert(this->ptr );
}

List::~List()
{
	Node *ptr = this->ptr; 	
			
	while (ptr ) {
		Node *p = ptr; 						
		ptr = ptr->next;
		delete p;						// 배열이 아닌 하나의 공간이면 delete + 포인터, delete [] 는 배열 삭제
	}
}
void List::print()	
{
	Node *ptr = this->ptr->next;	
	
	std::cout << "[";
	while (ptr ) {		
		std::cout << ptr->data;
		std::cout << ((ptr->next ) ? ", " : " "); // 연산자 우선 순위 때문에 ()를 적용
		ptr = ptr->next;
	}
	std::cout << "]" << std::endl;
}

void List::insertFirstNode(int data)	
{
	//this->ptr->next = createNode(data, this->ptr->next);	
	this->ptr->next = new Node(data, this->ptr->next);
	assert(this->ptr->next );
}

void List::insertNode(int prevData ,int data)
{
	Node *ptr = this->ptr->next;			
	while (ptr ) {				
		if (prevData == ptr->data)			
			break;								
		ptr = ptr->next;						
	}
	
	if (ptr ) {								
		//ptr->next = createNode(data, ptr->next);
		ptr->next = new Node(data, ptr->next);
	}
}

void List::deleteNode(int data)	
{
	Node *ptr = this->ptr->next;			
	Node *ptr2 = this->ptr;				
	
	while (ptr ) {							
		if(data == ptr->data) 				
			break;								
		ptr = ptr->next;						
		ptr2 = ptr2->next;					
	}
	
	if (ptr ) {								
		ptr2->next = ptr->next;				
		delete ptr;								
	}
}
