#ifndef LIST_H
#define LIST_H
#include "node.h"

template <typename T>
class List 
{

template <typename U>
friend std::ostream& operator<<(std::ostream& out, const List<U>& rhs);

public:	
	List();
	List(const List<T>& rhs);
	~List();

	List<T>& operator=(const List<T>& rhs);

	bool operator==(const List<T>& rhs);
	
//	void print();

	void insertFirstNode(const T& data);
	void insertNode(const T& prevData,const T& data);
	void deleteNode(const T& data);

private:
	Node<T> *ptr_;
};

#include <iostream>
#include <cassert>


template <typename T>
std::ostream& operator<<(std::ostream& out, const List<T>& rhs)
{
	Node<T> *ptr = rhs.ptr_->next;	
	
	std::cout << "[";
	while (ptr ) {		
		std::cout << ptr->data;
		std::cout << ((ptr->next ) ? ", " : " "); // 연산자 우선 순위 때문에 ()를 적용
		ptr = ptr->next;
	}
	std::cout << "]" << std::endl;
	
	return out;
}

template <typename T>
List<T>::List(const List<T>& rhs)
{
	ptr_ = new Node<T>(-1, NULL);
	
	Node<T> *ptr1 = ptr_;
	Node<T> *ptr2 = rhs.ptr_->next;			// dummy node
	while (ptr2 ) {
		ptr1->next = new Node<T>(ptr2->data, ptr2->next);
		
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
}

template <typename T>
inline List<T>::List()
{
	ptr_ = new Node<T>(-1, NULL);
	assert(ptr_ );
}


template <typename T>
List<T>::~List()
{
	Node<T> *ptr = ptr_; 	
			
	while (ptr ) {
		Node<T> *p = ptr; 						
		ptr = ptr->next;
		delete p;						// 배열이 아닌 하나의 공간이면 delete + 포인터, delete [] 는 배열 삭제
	}
}

template <typename T>
List<T>& List<T>::operator=(const List<T>& rhs)
{
	if (this != &rhs)
		Node<T> *ptr = ptr_; 	
			
	while (ptr_ ) {
		Node<T> *p = ptr_; 						
		ptr_ = ptr_->next;
		delete p;	
	}
	ptr_ = new Node<T>(-1, NULL);
	
	Node<T> *ptr1 = ptr_;
	Node<T> *ptr2 = rhs.ptr_->next;			// dummy node
	while (ptr2 ) {
		ptr1->next = new Node<T>(ptr2->data, ptr2->next);
		
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	return *this;	
}

template <typename T>
bool List<T>::operator==(const List<T>& rhs)
{
	Node<T> *ptr1 = ptr_->next;
	Node<T> *ptr2 = rhs.ptr_->next;
	while(ptr1 && ptr2) {					// 둘 다 NULL이 아니면 도는것
		if (ptr1->data != ptr2->data)
			break;
			
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	
	return (ptr1 == NULL && ptr2 == NULL);
}

template <typename T>
inline void List<T>::insertFirstNode(const T& data)	
{
	ptr_->next = new Node<T>(data, ptr_->next);
	assert(ptr_->next );
}

template <typename T>
void List<T>::insertNode(const T& prevData ,const T& data)
{
	Node<T> *ptr = ptr_->next;			
	while (ptr ) {				
		if (prevData == ptr->data)			
			break;								
		ptr = ptr->next;						
	}
	
	if (ptr ) {								
		ptr->next = new Node<T>(data, ptr->next);
	}
}

template <typename T>
void List<T>::deleteNode(const T& data)	
{
	Node<T> *ptr = ptr_->next;			
	Node<T> *ptr2 = ptr_;				
	
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

#endif
