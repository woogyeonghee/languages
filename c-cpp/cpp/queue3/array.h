#ifndef ARRAY_H
#define ARRAY_H

//#define ARRAYSIZE 10
//extern const int ARRAYSIZE;

class Array {
public:
	explicit Array(int size = ARRAYSIZE);		//explicit를 쓰면 인자가 한개인 생성자의 경우 int -> array로 바꾸는 상황 등을 막을 수 있다.
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	int& operator[](int index);
	const int& operator[](int index) const;				// 상수객체 일때	
		
	int size() const;
	
private:
	static const int ARRAYSIZE;
	
	int *pArr_;					// Heap에 데이터 저장
	int size_;
	
	void init(const int *pArr, int size);
};

#endif
