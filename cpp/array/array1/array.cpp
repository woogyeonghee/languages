#include "array.h"
#include <cassert>

//const int ARRAYSIZE = 10;
const int Array::ARRAYSIZE = 10;

void Array::init(const int *pArr, int size)
{
	pArr_ = new int[size];
	assert(pArr_ );
	for (int i = 0; i < size; ++i)
		pArr_[i] = pArr[i];
	
	size_ = size;
}

Array::Array(int size)
{
	pArr_ = new int[size];
	assert(pArr_ );
	for (int i = 0; i < size; ++i)
		pArr_[i] = 0;
	
	size_ = size;
}

Array::Array(const int *pArr, int size)
{
	this->init(pArr, size);
}

Array::Array(const Array& rhs)
{
	this->init(rhs.pArr_, rhs.size_);
}

Array::~Array()
{
	delete [] pArr_;
}

Array& Array::operator=(const Array& rhs)
{
	if (this != &rhs) {
		delete [] pArr_;
	
	
		this->init(rhs.pArr_, rhs.size_);
	}
	
	return *this;
		
}

bool Array::operator==(const Array& rhs) const
{
	if (size_ != rhs.size_)
		return false;
	
	int i;
	for (i = 0; i < rhs.size_; ++i) {
		if(pArr_[i] != rhs.pArr_[i])
			break;
	}
	return i == rhs.size_;	
}

int& Array::operator[](int index)
{
	return pArr_[index];
}

const int& Array::operator[](int index) const
{
	return pArr_[index];
}

int Array::size() const
{
	return size_;
}
