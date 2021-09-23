#include "stack.h"
#include <cassert>

//const int STACKSIZE = 100;				// 전역변수 이 값을 main에서 쓰고 싶다면 헤더파일에서 extern const int STACKSIZE; 선언
const int Stack::STACKSIZE = 100;			// static 멤버 변수
Stack::Stack(int size)
{
	pArr_ = new int[size];
	assert(pArr_ );
	size_ = size;
	tos_ = 0;
}

Stack::Stack(const Stack& rhs)
{
	pArr_ = new int[rhs.size_];
	assert(pArr_ );
	for (int i = 0; i < rhs.tos_; ++i)
		pArr_[i] = rhs.pArr_[i];
	
	size_ = rhs.size_;
	tos_ = rhs.tos_;
}

Stack::~Stack()
{
	delete [] pArr_;
}

Stack& Stack::operator=(const Stack& rhs)
{
	if (this != &rhs) {
		delete [] pArr_;
		
		pArr_ = new int[rhs.size_];
		assert(pArr_ );
		for (int i = 0; i < rhs.tos_; ++i)
			pArr_[i] = rhs.pArr_[i];
		
		size_ = rhs.size_;
		tos_ = rhs.tos_;
	}
	
	return *this;
}

bool Stack::operator==(const Stack& rhs) const
{
	if (tos_ != rhs.tos_ || size_ != rhs.size_)
		return false;
	int i;
	for (i = 0; i < rhs.tos_; ++i) {
		if (pArr_[i] != rhs.pArr_[i])
			break;
	}
	
	return (i == rhs.tos_);
}

int Stack::size() const
{
	return size_;
}

void Stack::push(int data)
{
	assert(tos_ != size_);		// 사이즈만큼 가득차면 full이므로 full인지 확인
	pArr_[tos_] = data;
	++tos_;
}

int Stack::pop()
{
	assert(tos_ != 0);			// 0이 아닌지 확인
	
	--tos_;
	return pArr_[tos_];
}
