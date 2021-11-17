#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"

template <typename T>
class BoundArray : public SafeArray<T>{
public:
    explicit BoundArray(int size=BOUNDARRAY_SIZE);
    BoundArray(T lower,T upper);
    BoundArray(const T *pArr,int size);
    
    bool operator==(const BoundArray<T>& rhs) const;

    T& operator[](T index);
    const T& operator[](T index) const;

    T lower() const;
    T upper() const;

private:
    static const int BOUNDARRAY_SIZE;
    int lower_;
    
};

#include "invalidIndex.h"

template <typename T>
const int BoundArray<T>::BOUNDARRAY_SIZE=10;

template <typename T>
BoundArray<T>::BoundArray(int size)
:SafeArray<T>(size),lower_(0)
{

}

template <typename T>
BoundArray<T>::BoundArray(T lower, T upper)
:SafeArray<T>(upper-lower+1),lower_(lower)
{

}

template <typename T>
BoundArray<T>::BoundArray(const T *pArr,int size)
:SafeArray<T>(pArr,size),lower_(0)
{


}

template <typename T>
bool BoundArray<T>::operator==(const BoundArray& rhs) const
{
    return (lower_==rhs.lower_ &&this->SafeArray<T>::operator==(static_cast<SafeArray<T>>(rhs)));
}

template <typename T>
T& BoundArray<T>::operator[](T index)
{
    if(index<lower_||index>this->upper())
    {
        throw InvalidIndex(index);
    }

    return this->SafeArray<T>::operator[](index-lower_);

}

template <typename T>
const T& BoundArray<T>::operator[](T index) const
{
    if(index<lower_||index>this->upper())
    {
        throw InvalidIndex(index);
    }

    return this->SafeArray<T>::operator[](index-lower_);

}

template <typename T>
T BoundArray<T>::lower() const
{
    return lower_;
}

template <typename T>
T BoundArray<T>::upper() const
{
    return lower_+this->Array<T>::size_ -1;
}
#endif
