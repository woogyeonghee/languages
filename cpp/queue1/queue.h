#ifndef QUEUE_H
#define QUEUE_H
class Queue
{
private:
	int front;
	int *pArr;
	int size;
	int rear;
public:
    Queue(int size);
    ~Queue();
    void push (int data);
    void pop (int *pData);
};



#endif
