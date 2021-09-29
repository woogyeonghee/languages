#include "invalidIndex.h"
#include "boundArray.h"

     
const int BoundArray::BOUNDARRAY_SIZE=10;

BoundArray::BoundArray(int size)
:SafeArray(size),lower_(0)
{

}

BoundArray::BoundArray(int lower, int upper)
:SafeArray(upper-lower+1),lower_(lower)
{

}

BoundArray::BoundArray(const int *pArr,int size)
:SafeArray(pArr,size),lower_(0)
{


}

bool BoundArray::operator==(const BoundArray& rhs) const
{
    return (lower_==rhs.lower_ &&this->SafeArray::operator==(static_cast<SafeArray>(rhs)));
}

int& BoundArray::operator[](int index)
{
    if(index<lower_||index>this->upper())
    {
        throw InvalidIndex(index);
    }

    return this->SafeArray::operator[](index-lower_);

}

const int& BoundArray::operator[](int index) const
{
    if(index<lower_||index>this->upper())
    {
        throw InvalidIndex(index);
    }

    return this->SafeArray::operator[](index-lower_);

}

int BoundArray::lower() const
{
    return lower_;
}

int BoundArray::upper() const
{
    return lower_+this->Array::size_ -1;
}
