#ifndef CORE_H
#define CORE_H

class Core {
// String 클래스에서 Core의 private 멤버로 접근 할 수 있도록 만들어 줌
friend class String;

private:
	// 없어도 될 것 같아서 자동 생성을 막기 위해 private에 넣었음
	Core(const Core& rhs);
	Core& operator=(const Core& rhs);
	// Core의 객체는 private로 갔으므로 String 클래스에서 필요에 의해 Core 객체를 만들 수 있음 main에서 만들 수 없음
	// handle(String)클래스 body(Core)클래스 스타일
	Core(const char *str = NULL);
	~Core();	
	
	void init(const char* str);			// 헬퍼 함수
	
	char *str_;
	int len_;
	int rc_;	// reference count
};

inline Core::Core(const char *str)
{
	this->init(str);
}
/*
inline Core::Core(const Core& rhs)
{
	this->init(rhs.str_);	
}

inline Core& Core::operator=(const Core& rhs)
{
	if (this != rhs) {
		delete [] str_;
		
		this->init(rhs.str_);
	}
	
	return *this;
}
*/

inline Core::~Core()
{
    delete [] str_; 
}


#endif
