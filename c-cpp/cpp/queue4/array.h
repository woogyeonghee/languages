#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
public:
	explicit Array<T>(int size = ARRAYSIZE);
	Array(const T *pArr, int size);
	Array(const Array<T>& rhs);
	~Array();
	
	Array<T>& operator=(const Array<T>& rhs);
	
	bool operator==(const Array<T>& rhs) const;
	
	T& operator[](int index);
	const T& operator[](int index) const;				// 상수객체 일때	
		
	int size() const;
	
private:
	static const T ARRAYSIZE;
	
	T *pArr_;					// Heap에 데이터 저장
	int size_;
	
	void init(const T *pArr, int size);
};

#include <cassert>

template <typename T>
const T Array<T>::ARRAYSIZE = 10;

template <typename T>
void Array<T>::init(const T *pArr, int size)
{
	pArr_ = new T[size];
	assert(pArr_ );
	for (int i = 0; i < size; ++i)
		pArr_[i] = pArr[i];
	
	size_ = size;
}

template <typename T>
Array<T>::Array(int size)
{
	pArr_ = new T[size];
	assert(pArr_ );
	for (int i = 0; i < size; ++i)
		pArr_[i] = 0;
	
	size_ = size;
}

template <typename T>
Array<T>::Array(const T *pArr, int size)
{
	this->init(pArr, size);
}

template <typename T>
Array<T>::Array(const Array<T>& rhs)
{
	this->init(rhs.pArr_, rhs.size_);
}

template <typename T>
Array<T>::~Array()
{
	delete [] pArr_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	if (this != &rhs) {
		delete [] pArr_;
	
	
		this->init(rhs.pArr_, rhs.size_);
	}
	
	return *this;
		
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const
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

template <typename T>
T& Array<T>::operator[](int index)
{
	return pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
	return pArr_[index];
}

template <typename T>
int Array<T>::size() const
{
	return size_;
}
#endif
