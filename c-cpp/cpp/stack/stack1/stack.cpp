//#include <cstdlib>
#include <cassert>
#include "stack.h"				// 구조체를 써야해서 stack.h를 include
// malloc 은 반환타입이  void이기 때문에 pArr의 형인 int로 type casting해야한다
Stack::Stack(int size)								// 생성자
{
	//this->pArr = (int *)malloc(sizeof(int) * size);
	this->pArr = new int[size];
	assert(this->pArr /*!= NULL*/);				// 참이면 프로그램 진행, 거짓이면 프로그램 중단
	
	this->size = size;
	this->tos = 0;
}

Stack::~Stack()										// 소멸자
{
	//free(this->pArr);								// malloc을 끝내기 위해
	delete [] this->pArr;
}

void Stack::push(int data)
{
	// 배열이 꽉 차면 못넣을 경우 예외처리
	assert(this->tos != this->size);

	this->pArr[this->tos] = data;		// 구조체 안의 배열
	++this->tos;
}

void Stack::pop(int *pData)
{
	assert(this->tos != 0);
	
	--this->tos;
	*pData = this->pArr[this->tos];				// return이 아닌 인자값으로 결과
}
