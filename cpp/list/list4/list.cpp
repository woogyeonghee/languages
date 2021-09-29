#include <iostream>
#include <cassert>
#include "list.h"
#include <cstring>


std::ostream& operator<<(std::ostream& out, const List& rhs)
{
	Node *ptr = rhs.ptr_->next;	
	
	std::cout << "[";
	while (ptr ) {		
		std::cout << ptr->data;
		std::cout << ((ptr->next ) ? ", " : " "); // 연산자 우선 순위 때문에 ()를 적용
		ptr = ptr->next;
	}
	std::cout << "]" << std::endl;
	
	return out;
}

List::List(const List& rhs)
{
	ptr_ = new Node(-1, NULL);
	
	Node *ptr1 = ptr_;
	Node *ptr2 = rhs.ptr_->next;			// dummy node
	while (ptr2 ) {
		ptr1->next = new Node(ptr2->data, ptr2->next);
		
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
}

List::List()
{
	ptr_ = new Node(-1, NULL);
	assert(ptr_ );
}


List::~List()
{
	Node *ptr = ptr_; 	
			
	while (ptr ) {
		Node *p = ptr; 						
		ptr = ptr->next;
		delete p;						// 배열이 아닌 하나의 공간이면 delete + 포인터, delete [] 는 배열 삭제
	}
}

List& List::operator=(const List& rhs)
{
	if (this != &rhs)
		Node *ptr = ptr_; 	
			
	while (ptr_ ) {
		Node *p = ptr_; 						
		ptr_ = ptr_->next;
		delete p;	
	}
	ptr_ = new Node(-1, NULL);
	
	Node *ptr1 = ptr_;
	Node *ptr2 = rhs.ptr_->next;			// dummy node
	while (ptr2 ) {
		ptr1->next = new Node(ptr2->data, ptr2->next);
		
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	return *this;	
}

bool List::operator==(const List& rhs)
{
	Node *ptr1 = ptr_->next;
	Node *ptr2 = rhs.ptr_->next;
	while(ptr1 && ptr2) {					// 둘 다 NULL이 아니면 도는것
		if (ptr1->data != ptr2->data)
			break;
			
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	
	return (ptr1 == NULL && ptr2 == NULL);
}

void List::insertFirstNode(int data)	
{
	ptr_->next = new Node(data, ptr_->next);
	assert(ptr_->next );
}

void List::insertNode(int prevData ,int data)
{
	Node *ptr = ptr_->next;			
	while (ptr ) {				
		if (prevData == ptr->data)			
			break;								
		ptr = ptr->next;						
	}
	
	if (ptr ) {								
		ptr->next = new Node(data, ptr->next);
	}
}

void List::deleteNode(int data)	
{
	Node *ptr = ptr_->next;			
	Node *ptr2 = ptr_;				
	
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
