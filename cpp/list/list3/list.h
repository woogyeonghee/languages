#ifndef LIST_H
#define LIST_H

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next);

};

class List
{

public:

    List();
    ~List();

    void print();

    void insertFirstNode(int data);
    void insertNode(int prevData,int data);
    void deleteNode(int data);
    
private:
    Node *ptr;
};


#endif
