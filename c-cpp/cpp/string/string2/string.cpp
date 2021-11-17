#include "string.h"
#include <cstring>
#include <cassert>

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	out << rhs.str_;
	return out;
}

void String::init(const char *str)
{
	if (str )	{
		len_ = strlen(str);
		
		str_ = new char[len_ + 1];				// 컴파일러가 제공하는 소멸자를 못씀(속이 비어있어서) -> 소멸자 생성 필요
		assert(str_ );
		strcpy(str_, str);
		
	}
	else	{
		len_ = 0;
		
		str_ = new char[1];								// \0을 저장하기 위한 공간, 소멸자에서 배열 삭제를 썼기 때문에 new char;는 사용 불가
		assert(str_ );
		str_[0] = '\0';
	}
}

/*
String::String()										// default 생성자
{
	str_ = new char[1];								// \0을 저장하기 위한 공간, 소멸자에서 배열 삭제를 썼기 때문에 new char;는 사용 불가
	assert(str_ );
	str_[0] = '\0';
	
	len_ = 0;
}
*/

String::String(const char *str)
{
	this->init(str);
}

String::String(const char *str, bool )			// 함수 중복을 사용하려면 인자가 달라야하기 때문에 의미없는 bool을 줬음
{
	//str_ = (char *)str;								// type casting이 필요하다
	str_ =const_cast<char*>(str);
    len_ = strlen(str);
}

String::String(const String& rhs)					// deep copy
{
	this->init(rhs.str_);
}

String::~String()
{
	delete [] str_;									// 생성자에서 new를 썼기 때문에 소멸자를 만들어주고 delete를 넣어줌
}

String& String::operator=(const String& rhs)
{
	if (this != &rhs) {			// 자기 자신과 객체의 주소값이 다르면 아래 내용 동작			s1=s1;을 방지하기 위함 삭제한 내용을 또 붙이기 때문
		delete [] str_;			// Heap 영역에 있는 기존 값 삭제
		
		this->init(rhs.str_);
	}
	return *this;
}

String& String::operator=(const char *str)
{
	if(str_ != str) {
		delete [] str_;
		
		str_ = new char[strlen(str) + 1];
		assert(str_);
		strcpy(str_, str);
		
		len_ = strlen(str);
	}
	return *this;
}

bool String::operator==(const String& rhs) const
{
	return	strcmp(str_, rhs.str_) == 0 ;
}
/*
const String String::operator+(const String& rhs) const
{
	char *buf = new char[len_ + rhs.len_ + 1];
	assert(buf );
	strcpy(buf, str_);
	strcat(buf, rhs.str_);
	
	String result(buf);
	delete [] buf;
	
	return result;
}
*/

const String String::operator+(const String& rhs) const
{
	char *buf = new char[len_ + rhs.len_ + 1];
	assert(buf );
	strcpy(buf, str_);
	strcat(buf, rhs.str_);
	
	String result(buf, true);						// deep copy -> shallow copy, 의미없는 bool을 true로 넣음
	//delete [] buf;
	
	return result;
}
const char *String::c_str() const
{
	return str_;
}

int String::length() const
{
	return len_;
}
