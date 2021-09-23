#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE = 100;

Queue::Queue(int size)
:pArr_(new int[size_]), size_(size), front_(0), rear_(0)
{
	assert(pArr_ );
}

Queue::Queue(const Queue& rhs)
:pArr_(new int[rhs.size_]), size_(rhs.size_), front_(rhs.front_), rear_(rhs.rear_)
{
	assert(pArr_ );
}

Queue::~Queue()
{
	delete [] pArr_;
}

Queue& Queue::operator=(const Queue& rhs)
{
	if(this != &rhs) {
		delete [] pArr_;
		pArr_ = new int[rhs.size_];
		assert(pArr_ );
		size_ = rhs.size_;
		for(int i = front_; i < rear_; ++i)
			pArr_[i] = rhs.pArr_[i];

		front_ = rhs.front_;
		rear_ = rhs.rear_;
	}
	
	return *this;
}

bool Queue::operator==(const Queue& rhs) const
{
	if (size_ != rhs.size_ || front_ != rhs.front_ || rear_ != rhs.rear_)
		return false;
	
	int i;
	for (i = front_; i < rear_; ++i) {
		if (pArr_[i] != rhs.pArr_[i])
			break;
	}
	
	return (i == rear_);
}

int Queue::size() const
{
	return size_;
}

void Queue::push(int data)
{
	assert(rear_ != size_);
	pArr_[rear_] = data;
	++rear_;
}

int Queue::pop()
{
	assert(front_ != rear_);
	int index = front_;
	++front_;

	return pArr_[index];
}

/*
const int Queue::QUEUESIZE = 100;

Queue::Queue(int size)
{
	pArr_ = new int[size];
	
	assert(pArr_ );
	size_ = size;
	front_ = rear_ = 0;
}

Queue::Queue(const Queue& rhs)
{
	pArr_ = new int[rhs.size_];
	assert(pArr_ );
	
	for (int i = 0; i < rhs.front_; ++i)
		pArr_[i] = rhs.pArr_[i];
	size_ = rhs.size_;
	front_ = rhs.front_;
	rear_ = rhs.rear_;
}

Queue::~Queue()
{
	delete [] pArr_;
}

Queue& Queue::operator=(const Queue& rhs)
{
	if (this != &rhs) {
		delete [] pArr_;
		
		pArr_ = new int[rhs.size_];
		assert(pArr_ );
		
		for (int i = 0; i < rhs.front_; ++i)
			pArr_[i] = rhs.pArr_[i];
		size_ = rhs.size_;
		front_ = rhs.front_;
		rear_ = rhs.rear_;
	}
	
	return *this;
}

bool Queue::operator==(const Queue& rhs) const
{
	if (front_ != rhs.front_ || size_ != rhs.size_)
		return false;
	int i;
	for (i = 0; i < rhs.front_; ++i)
		if(pArr_[i] != rhs.pArr_[i])
			break;
	
	return (i == rhs.front_);
}

int Queue::size() const
{
	return size_;
}

void Queue::push(int data)
{
	assert(rear_ != size_);
	
	pArr_[rear_] = data;
	++rear_;
}

int Queue::pop(int data)
{
	assert(front_ != rear_);	
	data = pArr_[front_];
	
	//*pData = pArr_[front_];		// 임시 변수
	++front_;
	return data;
}
*/
