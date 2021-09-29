#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

class SafeArray : public Array{		// Array로 부터 상속을 받아 SafeArray를 만듦
public:
	SafeArray(int size = Array::ARRAYSIZE);			// 자식 클래스에서 부모 클래스로 접근하는 것은 불가능
	SafeArray(const int *pArr, int size);
	//	SafeArray(const SafeArray& rhs);				// private에 값이 없으므로 필요X	값이 있는 곳은 부모 클래스의 private
	//	virtual ~SafeArray();										// private에 값이 없으므로 필요X	값이 있는 곳은 부모 클래스의 private
	// SafeArray& operator=(const SafeArray& rhs); 	// private에 값이 없으므로 필요X	값이 있는 곳은 부모 클래스의 private			
	
	bool operator==(const SafeArray& rhs) const;
	
	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;
	
	int size() const;
	
private:


};


#endif
