#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"

class BoundArray : public SafeArray
{
public:
    explicit BoundArray(int size=BOUNDARRAY_SIZE);
    BoundArray(int lower,int upper);
    BoundArray(const int *pArr,int size);
    
    bool operator==(const BoundArray& rhs) const;

    int& operator[](int index);
    const int& operator[](int index) const;
    int lower() const;
    int upper() const;

private:
    static const int BOUNDARRAY_SIZE;
    int lower_;
    
};

#endif
