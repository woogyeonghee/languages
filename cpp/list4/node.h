#ifndef NODE_H
#define NODE_H
#include <iostream>
template <typename T>
class List;

template <typename T>
class Node
{
template <typename U>
friend class List;

template<typename U>
friend std::ostream& operator<<(std::ostream& out, const List<U>& rhs);

private:
    T data;
    Node *next;
    
    Node(const T& data, Node *next);
};


template <typename T>
inline Node<T>::Node(const T& d, Node *n)		
: data(d), next(n)
{

}

#endif
