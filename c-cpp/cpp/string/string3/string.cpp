#include "string.h"
#include <cstring>
#include "core.h"
#include <cassert>

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	//out << rhs.pCore_->str_;			// core와는 friend가 아니고 String만 friend 이므로 허용된 연산 사용
	out << rhs.c_str();
	
	return out;
}

String::String(const char *str)
{
	pCore_ = new Core(str);				// heap상에 코어 타입의 객체 생성
	pCore_->rc_ = 1;						// reference count의 초기값은 1
}

String::String(const String& rhs)					// deep copy
{
	// 기존에 만들어진 객체를 가리키면 됨 + rc
	pCore_ = rhs.pCore_;			// 기존에 만들어진 포인터를 가리키게 하고
	++pCore_->rc_;					// reference count 1 증가
}

String::~String()
{
	// 다른 포인터가 가리키고 있을 수도 있으니 삭제해서는 안됨 -> rc를 감소시켰을 때 0이 된다면 없앨 수 있음
	--pCore_->rc_;
	if (pCore_->rc_ == 0)
		delete pCore_;
	
}

String& String::operator=(const String& rhs)
{
	// 같은 객체를 가리키고 있는지 확인
	if (pCore_ != rhs.pCore_) {
		--pCore_->rc_;
		if(pCore_->rc_ == 0)	
			delete pCore_;
	
		pCore_ = rhs.pCore_;
		++pCore_->rc_;
	}
		
	return *this;
}

bool String::operator==(const String& rhs) const
{
	// 내용을 봐야함
	if (pCore_ == rhs.pCore_)		// 같은 객체를 가리키면
		return true;
		
	return	strcmp(pCore_->str_, rhs.pCore_->str_) == 0;		// string 클래스가 core클래스의 private 접근
}

const String String::operator+(const String& rhs) const
{
	char *buf = new char[pCore_->len_ + rhs.pCore_->len_ + 1];
	assert(buf );
	strcpy(buf, pCore_->str_);
	strcat(buf, rhs.pCore_->str_);
	
	String result(buf);
	delete [] buf;
	
	return result;
}

/*
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
*/

const char *String::c_str() const
{
	return pCore_->str_;			// private 멤버 접근
}

int String::length() const
{
	return pCore_->len_;			// private 멤버 접근
}
