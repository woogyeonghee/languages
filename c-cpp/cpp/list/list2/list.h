#ifndef LIST_H
#define LIST_H

class Node {			// 안에서 사용해야해서 typedef struct node로 생성
public:
	int data;
	Node *next;
	
	Node(int data, Node *next);
	//~Node();			//소멸자를 만들지 않아도 컴파일러가 본체가 비어있는 소멸자를 만들어줌
};

class List {
friend std::ostream& operator<<(std::ostream& out, const List& rhs);
public:	
	List();
	List(const List& rhs);
	~List();

	List& operator=(const List& rhs);

	bool operator==(const List& rhs);
	
//	void print();

	void insertFirstNode(int data);
	void insertNode(int prevData, int data);
	void deleteNode(int data);

private:
	Node *ptr_;
};
#endif
