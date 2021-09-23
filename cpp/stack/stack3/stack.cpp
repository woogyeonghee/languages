#include "stack.h"
#include <cassert>

const int Stack::STACKSIZE = 100;			// static 멤버 변수

Stack::Stack(int size)
//클래스 타입의 멤버변수를 가질땐 생성자를 호출해야하고 이것은 초기화 리스트에서 다뤄야함, 안에서는 만들 수 없음
: arr_(size)
{
	
	//pArr_ = new int[size];
	//assert(pArr_ );
	//size_ = size;
	tos_ = 0;
}

Stack::Stack(const Stack& rhs)
: arr_(rhs.arr_)					// array의 복사 생성자 호출
{
	//pArr_ = new int[rhs.size_];
	//assert(pArr_ );
	//for (int i = 0; i < rhs.tos_; ++i)
	//	pArr_[i] = rhs.pArr_[i];
	
	//size_ = rhs.size_;
	tos_ = rhs.tos_;
}

Stack::~Stack()
{
	//delete [] pArr_;
}

Stack& Stack::operator=(const Stack& rhs)
{
	if (this != &rhs) {
		//delete [] pArr_;
		
		//pArr_ = new int[rhs.size_];
		//assert(pArr_ );
		//for (int i = 0; i < rhs.tos_; ++i)
		//	pArr_[i] = rhs.pArr_[i];
		
		//size_ = rhs.size_;
		arr_ = rhs.arr_;				//전체를 복사 함, 속도는 느림
		tos_ = rhs.tos_;
	}
	
	return *this;
}

bool Stack::operator==(const Stack& rhs) const
{
	if (tos_ != rhs.tos_ /* || size_ != rhs.size_ */ )
		return false;
	//int i;
	//for (i = 0; i < rhs.tos_; ++i) {
	//	if (pArr_[i] != rhs.pArr_[i])
	//		break;
	//}
	
	//return (i == rhs.tos_);
	return arr_ == rhs.arr_;
}

int Stack::size() const
{
	// return size_;
	return arr_.size();
}

void Stack::push(int data)
{
	//assert(tos_ != size_);		// 사이즈만큼 가득차면 full이므로 full인지 확인
	assert(tos_ != arr_.size());
	
	//pArr_[tos_] = data;
	arr_[tos_] = data;
	++tos_;
}

int Stack::pop()
{
	assert(tos_ != 0);			// 0이 아닌지 확인
	
	--tos_;
	return arr_[tos_];
	//return pArr_[tos_];
}
