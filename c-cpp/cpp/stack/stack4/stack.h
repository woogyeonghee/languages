#ifndef STACK_H 
#define STACK_H
#include "array.h"

template <typename T>
class Stack {
public:
	explicit Stack(int size = STACKSIZE);
	Stack(const Stack<T>& rhs);
	~Stack();
	
	Stack<T>& operator=(const Stack<T>& rhs);
	
	bool operator==(const Stack<T>& rhs) const;
	
	int size() const;
	
	//void push(T data);
	void push(const T& data);
	T pop();

private:
	static const int STACKSIZE;	
	
    Array<T> arr_;				
	int tos_;
	
};

#include <cassert>

template <typename T>
const int Stack<T>::STACKSIZE = 100;

template <typename T>
Stack<T>::Stack(int size)
: arr_(size)
{
	
	tos_ = 0;
}

template <typename T>
Stack<T>::Stack(const Stack<T>& rhs)
: arr_(rhs.arr_)					
{
	tos_ = rhs.tos_;
}

template <typename T>
Stack<T>::~Stack()
{
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& rhs)
{
	if (this != &rhs) {
		arr_ = rhs.arr_;				
		tos_ = rhs.tos_;
	}
	
	return *this;
}

template <typename T>
bool Stack<T>::operator==(const Stack<T>& rhs) const
{
	if (tos_ != rhs.tos_ )
		return false;
	return arr_ == rhs.arr_;
}

template <typename T>
int Stack<T>::size() const
{
	return arr_.size();
}

template <typename T>
void Stack<T>::push(const T& data)
{
	assert(tos_ != arr_.size());
	
	arr_[tos_] = data;
	++tos_;
}

template <typename T>
T Stack<T>::pop()
{
	assert(tos_ != 0);			
	
	--tos_;
	return arr_[tos_];
}


#endif

