#include <iostream>
#include "string.h"
using std::cout;
using std::endl;

int main()
{
	String s1;
	//String s2 = NULL;
	const String s2 = "hello, world";
	String s3 = s2;
	
	s1 = s2;
	s1 = "hello"; 				
	// 변환생성자에 의해 가능 String(const char* str), String tmp("hello"); s1.operator=(tmp); tmp.~String();
	
	if (s1 == s2)
		cout << "s1 and s2 are equal" << endl;
	else
		cout << "s1 and s2 are not equal" << endl;
	
	const String title = "Knocking on the heaven's door";
	const String name = "Bob Dillon";

	String s4 = title + " - " + name;		
	
	// get 함수
	cout << "s1 : " << s1.c_str() << endl;
	cout << "s1 len : " << s1.length() << endl;
	// 문자열이 바뀌면 사이즈도 바뀌므로 치환연산으로 바뀌는게 맞으므로 set함수가 없음
	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	cout << "s3 : " << s3 << endl;
	cout << "s4 : " << s4 << endl;
	
	return 0;
}
