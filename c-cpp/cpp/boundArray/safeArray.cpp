#include "safeArray.h"
#include <cassert>
SafeArray::SafeArray(int size)
: Array(size)													//멤버 변수가 const 또는 ~ 일때, 상속 받았을 때 부모쪽의 생성자를 호출할 때 초기화 리스트 사용
{
	
}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}
/*
SafeArray::SafeArray(const SafeArray& rhs)
: Array( (Array)rhs)									// SafeArray 클래스 타입을 Array 타입으로 타입캐스팅 (슬라이싱) 자식에서 추가된 것은 삭제하고 부모쪽의 것만 넣는 것
{

}

SafeArray::~SafeArray()
{

}

SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
	this->Array::operator=( (Array)rhs);					// 부모쪽의 함수 호출 + 슬라이싱
}
*/
bool SafeArray::operator==(const SafeArray& rhs) const			// return 오류있음
{
	return this->Array::operator==( (Array)rhs);					// 부모쪽의 함수 호출 + 슬라이싱
}
// 부모쪽의 기능 + 추가적인 기능 -> 상속의 전형적인 모습
int& SafeArray::operator[](int index)
{
	assert(index >= 0 && index < this->Array::size_);		// 자식의 멤버 함수가 부모의 private 변수 접근 -> 접근 불가
	
	return this->Array::operator[](index);				// 부모쪽 함수 호출
}

const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index < this->Array::size_); 		// 자식의 멤버 함수가 부모의 private 변수 접근 -> 접근 불가

	return this->Array::operator[](index);
}

int SafeArray::size() const
{
	return this->Array::size_;				// 자식의 멤버 함수가 부모의 private 변수 접근 -> 접근 불가
}
