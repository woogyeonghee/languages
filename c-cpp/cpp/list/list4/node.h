#ifndef NODE_H
#define NODE_H
#include <iostream>
class List;

class Node
{
friend class List;
friend std::ostream& operator<<(std::ostream& out, const List& rhs);

private:
    int data;
    Node *next;
    
    Node(int data, Node *next);
};

#endif
