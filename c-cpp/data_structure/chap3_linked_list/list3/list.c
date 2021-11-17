#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <assert.h>

static Node *createNode(int data,Node *next)
{
    Node *p=malloc(sizeof(Node));
    assert(p);
    p->data=data;
    p->next=next;

    return p;
}

void initList(List *pList)
{
    //pList->ptr=malloc(sizeof(Node));
    //pList->ptr->data=>
    //pList->ptr->next=NULL;
    pList->ptr=createNode(-1,NULL);
}

void cleanupList(List *pList)
{
    Node *ptr=pList->ptr;
    
    while(ptr)
    {
        Node *p=ptr;
        ptr=ptr->next;
        free(p);
    }
}

void printList(List *pList)
{
    Node *ptr=pList->ptr->next;
    printf("[");
    while(ptr)
    {

        printf("%d",ptr->data);
        printf((ptr->next)?", ":"");
        ptr=ptr->next;
    }
    printf("]\n");
}

void insertFirstNode(List *pList,int data)
{
    //Node *p=malloc(sizeof(Node));
    //p->data=data;
    //p->next=pList->ptr->next;
    //pList->ptr->next=p;
    pList->ptr->next=createNode(data,pList->ptr->next);
}

void insertNode(List *pList,int prevData,int data)
{
    Node *ptr=pList->ptr->next;
    while(ptr)
    {
        if(prevData==ptr->data)
            break;
        ptr=ptr->next;
    }
    if(ptr)
    {
        //Node *p=malloc(sizeof(Node));
        //p->data=data;
        //p->next=ptr->next;
        //ptr->next=p;
        ptr->next=createNode(data,ptr->next);
    }

}

void deleteNode(List *pList, int data)
{
    Node *ptr=pList->ptr->next;
    Node *ptr2=pList->ptr;
    
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
        free(ptr);
    }

}
