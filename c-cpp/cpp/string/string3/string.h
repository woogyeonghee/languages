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

#endif
