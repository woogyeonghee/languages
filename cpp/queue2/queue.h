#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
	explicit Queue(int size = Queue::QUEUESIZE);
	Queue(const Queue& rhs);
	~Queue();
	
	Queue& operator=(const Queue& rhs);
	
	bool operator==(const Queue& rhs) const;
	
	int size() const;
	
	void push(int data);
	int pop();
	
private:
	static const int QUEUESIZE;	
	
	int *pArr_;
	int size_;
	
	int front_;
	int rear_;
};

/*
class Queue {
public:
	explicit Queue(int size = QUEUESIZE);
	Queue(const Queue& rhs);
	~Queue();

	Queue& operator=(const Queue& rhs);

	bool operator==(const Queue& rhs) const;
	
	int size() const;

	void push(int data);
	int pop(int data);

private:
	static const int QUEUESIZE;	
	int *pArr_;
	int size_;
	int rear_;
	int front_;
	
	
};
*/
#endif
