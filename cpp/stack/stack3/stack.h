#ifndef STACK_H
#define STACK_H
#include "array.h"

class Stack {

public:
	// 포인터를 메모리를 가지고 heap영역에 데이터를 저장 -> deep copy 필요, 소멸자, 복사생성자, 치환연산
	explicit Stack(int size = STACKSIZE);
	Stack(const Stack& rhs);
	~Stack();
	
	Stack& operator=(const Stack& rhs);
	
	bool operator==(const Stack& rhs) const;
	
	int size() const;
	
	void push(int data);
	int pop();
private:
	static const int STACKSIZE;	
	// 포인터 멤버가 없으므로 컴파일러가 제공하는 복사생성자 치환연산 소멸자 사용 가능
	Array arr_;				// Array의 arr을 가져와서 사용
	//int *pArr_;
	//int size_;
	int tos_;
	
};



#endif

