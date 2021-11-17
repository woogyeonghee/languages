#include <iostream>
#include "safeArray.h"
#include "invalidIndex.h"
using std::cout;
using std::endl;

int main()
{
	int nums[] = {1, 2, 3, 4, 5};
	
	Array *pArr = new SafeArray(nums, 5);		// 부모 클래스 타입으로 자식 클래스 타입을 가리킴
	// 부모 클래스 타입의 포인터는 자식 클래스 타입의 객체나 클래스를 참조할 수 있다
	// 베이스 클래스 디라이브드 클래스 || 기본클래스 파생 클래스 슈퍼클래스 서브클래스
    try
    {
        (*pArr)[5] = 1; 
    }
    catch (InvalidIndex& e) 
    {
        //std::cerr<<e.what()<<endl;
        //std::cerr<<"array boundary error.invalid index:"<<index<<endl;
        std::cerr<<"array boundary error. invalid index : "<<e.invalid()<<endl;
        return 1;
    }
    // Array::operator[](5) ??? SafeArray::operator[](5)
	// 포인터는 부모, 대괄호는 자식쪽  -> 부모쪽이 호출되었음(가상함수 virtual이 없을 경우)
	// virtual을 사용하면 실행시간에 실제 객체의 타입을 보고 호출하게 하므로 오류가 생김, 자바는 무조건 virtual이 붙어있음
	
	delete pArr;			// 소멸자는 부모, 객체는 자식 -> virtual 멤버함수를 하나라도 가지면 소멸자엔 무조건 virtual을 넣어야함
	return 0;
}
