#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

template <typename T>
class SafeArray : public Array<T>{
public:
	SafeArray(int size = Array<T>::ARRAYSIZE);	
	SafeArray(const T *pArr, int size);
	
	bool operator==(const SafeArray<T>& rhs) const;
	
	virtual T& operator[](T index);
	virtual const T& operator[](T index) const;
	
	int size() const;
	
private:


};

#include <cassert>

template <typename T>
SafeArray<T>::SafeArray(int size)
: Array<T>(size)									
{
	
}

template <typename T>
SafeArray<T>::SafeArray(const T *pArr, int size)
: Array<T>(pArr, size)
{

}

template <typename T>
bool SafeArray<T>::operator==(const SafeArray<T>& rhs) const		
{
	return this->Array<T>::operator==( (Array<T>)rhs);	
}


template <typename T>
T& SafeArray<T>::operator[](T index)
{
	assert(index >= 0 && index < this->Array<T>::size_);	
	
	return this->Array<T>::operator[](index);	
}

template <typename T>
const T& SafeArray<T>::operator[](T index) const
{
	assert(index >= 0 && index < this->Array<T>::size_); 	

	return this->Array<T>::operator[](index);
}

template <typename T>
int SafeArray<T>::size() const
{
	return this->Array<T>::size_;				
}

#endif
