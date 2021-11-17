#ifndef ARRAY_H
#define ARRAY_H

//#define ARRAYSIZE 10
//extern const int ARRAYSIZE;

class Array {
public:
	explicit Array(int size = ARRAYSIZE);		//explicit를 쓰면 인자가 한개인 생성자의 경우 int -> array로 바꾸는 상황 등을 막을 수 있다.
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	virtual ~Array();
	
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	// 실행시간에 바인딩, 실제 객체 타입을 보고 객체의 함수를 호출
	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;				// 상수객체 일때	
		
	int size() const;
	
private:
	int *pArr_;					// Heap에 데이터 저장
	
	void init(const int *pArr, int size);
	
protected:						// protected는 원래 private 멤버, 자식쪽의 멤버 함수가 부모의 private에 접근 할 수 있도록
	static const int ARRAYSIZE;
	
	int size_;
};

#endif
