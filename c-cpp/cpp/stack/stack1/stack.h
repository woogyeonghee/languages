#ifndef STACK_H
#define STACK_H

class Stack{
private:
	int *pArr;							// heap 메모리에 접근하기 위해 포인터 사용
	int size;
	int tos;
	
public:
	// 멤버함수 -> 객체를 통해 멤버함수 호출
	Stack(int size);					// 생성자
	~Stack();							// 소멸자

	void push(int data);
	void pop(int *pData);
} ;



#endif
