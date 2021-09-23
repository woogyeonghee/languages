#ifndef STACK_H
#define STACK_H

//#define STACKSIZE 100				// #define은 전처리 지시자
//const int STACKSIZE = 100;			// 컴파일 시간에 타입 체크, c++방식 -> cpp파일에서 사용
//extern const int STACKSIZE;				// Stack 클래스의 멤버함수만 사용하면 되므로 (특정 클래스에 관련된 전역변수) static 멤버 변수 사용 (메인에서 접근 불가)

class Stack {

public:
	// 포인터를 메모리를 가지고 heap영역에 데이터를 저장 -> deep copy 필요, 소멸자, 복사생성자, 치환연산
	explicit Stack(int size = STACKSIZE);
	Stack(const Stack& rhs);
	~Stack();
	
	Stack& operator=(const Stack& rhs);
	
	bool operator==(const Stack& rhs) const;
	
	int size() const;
	
	void push(int data);
	int pop();
private:
	static const int STACKSIZE;	
		
	int *pArr_;
	int size_;
	int tos_;
	

};



#endif

