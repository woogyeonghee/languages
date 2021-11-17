#ifndef STRING_H
#define STRING_H
#include <iostream>
#include "core.h"

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

public:
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);	
	//String& operator=(const char *str);
	
	bool operator==(const String& rhs) const;
	
	const String operator+(const String& rhs) const;
	
	const char *c_str() const;			// str(주소값)을 리턴함
	int length() const;					// 길이 리턴
	
private:
	Core *pCore_;
	
};

inline std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	//out << rhs.pCore_->str_;			// core와는 friend가 아니고 String만 friend 이므로 허용된 연산 사용
	out << rhs.c_str();
	
	return out;
}

inline String::String(const char *str)
{
	pCore_ = new Core(str);				// heap상에 코어 타입의 객체 생성
	pCore_->rc_ = 1;						// reference count의 초기값은 1
}

inline String::String(const String& rhs)					// deep copy
{
	// 기존에 만들어진 객체를 가리키면 됨 + rc
	pCore_ = rhs.pCore_;			// 기존에 만들어진 포인터를 가리키게 하고
	++pCore_->rc_;					// reference count 1 증가
}

inline String::~String()
{
	// 다른 포인터가 가리키고 있을 수도 있으니 삭제해서는 안됨 -> rc를 감소시켰을 때 0이 된다면 없앨 수 있음
	--pCore_->rc_;
	if (pCore_->rc_ == 0)
		delete pCore_;
	
}


inline const char *String::c_str() const
{
	return pCore_->str_;			// private 멤버 접근
}

inline int String::length() const
{
	return pCore_->len_;			// private 멤버 접근
}
#endif
