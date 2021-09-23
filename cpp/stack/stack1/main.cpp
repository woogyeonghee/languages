//#include <cstdio>
#include <iostream>
#include "stack.h"
// 배열의 크기를 고정 100이 아닌 가변 길이의 배열로 만들기
// heap 메모리에 접근
// cpp version
int main()
{
	Stack s1(100), s2(10);					// 지역변수 s1, s2생성 -> 생성자 호출
	//s1.initStack(100);
	//s2.initStack(10);
	
	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	//s1.tos = 0;
	
	int re;						// 인자를 통해 결과값을 받음 
	
	//s1.pop(&re);	printf("s1 1st pop : %d\n", re);		
	s1.pop(&re);	std::cout << "s1 1st pop() : " << re << std::endl;				// daisy-chain 방식 표현
	// 이 식의 결과값은 cout, 부효과(side effect)로 화면상에 문자열 출력, std::endl -> "\n"
	s1.pop(&re);	std::cout << "s1 2nd pop() : " << re << std::endl;	
	s1.pop(&re);	std::cout << "s1 3rd pop() : " << re << std::endl;	
	
	s2.push(900);
	s2.push(800);
	s2.push(700);
	
	s2.pop(&re);	std::cout << "s2 1st pop() : " << re << std::endl; 
	s2.pop(&re);	std::cout << "s2 2nd pop() : " << re << std::endl; 
	s2.pop(&re);	std::cout << "s2 3rd pop() : " << re << std::endl; 
	
	//s1.cleanupStack();
	//s2.cleanupStack();
	return 0;			// 지역변수 사라짐 -> 소멸자 호출
}
