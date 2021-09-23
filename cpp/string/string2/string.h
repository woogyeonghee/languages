#ifndef STRING_H
#define STRING_H
#include <iostream>

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

public:
	// String() { } X
	// String *operator&() { return *this; }
	// const String *operaetor&() const { return *this; }

	//String();
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);	
	String& operator=(const char *str);
	
	bool operator==(const String& rhs) const;
	
	const String operator+(const String& rhs) const;
	
	const char *c_str() const;			// str(주소값)을 리턴함
	int length() const;					// 길이 리턴
	
private:
	char *str_;
	int len_;			//size_t len;

	void init(const char *str);					// tool, helper함수 
	String(const char *str, bool );
};

#endif
