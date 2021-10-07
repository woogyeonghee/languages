#include "string.h"
#include <cstring>
#include "core.h"
#include <cassert>


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

