#ifndef a_H
#define a_H

class Stack
{
private:
	int *pArr;
	int size;
	int tos;
public:
    Stack(int size);//constructor
    ~Stack();//destructor
    
    void push(int data);
    void pop (int *pData);
};



#endif
