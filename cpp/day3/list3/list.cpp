#include <iostream>
#include "list.h"
#include <cassert>
#include <cstdio>
Node::Node (int data,Node *next)
{
    this->data=data;
    this->next=next;

}

List::List()
{
    this->ptr=new Node(-1,NULL);
    assert(this->ptr);
}

List::~List()
{
    Node *ptr=this->ptr;
    
    while(ptr)
    {
        Node *p=ptr;
        ptr=ptr->next;
        delete p;
    }
}

void List::print()
{
    Node *ptr=this->ptr->next;
    printf("[");
    while(ptr)
    {
        std::cout<<ptr->data;
        std::cout<<((ptr->next)?", ":"");

        ptr=ptr->next;
    }
    std::cout<<"]\n"<<std::endl;
}

void List::insertFirstNode(int data)
{
    this->ptr->next=new Node(data,this->ptr->next);
    assert(this->ptr->next);
}

void List::insertNode(int prevData,int data)
{
    Node *ptr=this->ptr->next;
    while(ptr)
    {
        if(prevData==ptr->data)
            break;
        ptr=ptr->next;
    }
    if(ptr)
    {
        ptr->next=new Node(data,ptr->next);
    }

}

void List::deleteNode(int data)
{
    Node *ptr=this->ptr->next;
    Node *ptr2=this->ptr;
    
    while(ptr)
    {
        if(data==ptr->data)
            break;
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
    if(ptr)
    {
        ptr2->next=ptr->next;
        delete ptr;
    }
}
