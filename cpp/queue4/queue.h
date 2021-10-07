#ifndef QUEUE_H
#define QUEUE_H
#include "array.h"
#include "complex.h"

template <typename T>
class Queue {
public:
	explicit Queue(int size = Queue::QUEUESIZE);
	Queue(const Queue<T>& rhs);
	~Queue();
	
	Queue<T>& operator=(const Queue<T>& rhs);
	
	bool operator==(const Queue<T>& rhs) const;
	
	int size() const;
	
	void push(const T& data);
	T pop();
	
private:
	static const int QUEUESIZE;	
	
	Array<T> arr_;
	
	int front_;
	int rear_;
};


#include <cassert>

template <typename T>
const int Queue<T>::QUEUESIZE = 100;

template <typename T>
Queue<T>::Queue(int size)
: arr_(size), front_(0), rear_(0)
{
}

template <typename T>
Queue<T>::Queue(const Queue<T>& rhs)
: arr_(rhs.arr_), front_(rhs.front_), rear_(rhs.rear_)
{
}

template <typename T>
Queue<T>::~Queue()
{
}

template <typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& rhs)
{
	if(this != &rhs) {
		arr_ = rhs.arr_;		
		
		front_ = rhs.front_;
		rear_ = rhs.rear_;
	}
	
	return *this;
}

template <typename T>
bool Queue<T>::operator==(const Queue<T>& rhs) const
{
	if (front_ != rhs.front_ || rear_ != rhs.rear_)
		return false;
	
	return (arr_ == rhs.arr_);
}

template <typename T>
int Queue<T>::size() const
{
	return arr_.size();
}

template <typename T>
void Queue<T>::push(const T& data)
{
	assert(rear_ != arr_.size());
	
	arr_[rear_] = data;
	++rear_;
}

template <typename T>
T Queue<T>::pop()
{
	assert(front_ != rear_);

	int index = front_;
	++front_;

	return arr_[index];
}

#endif
