#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"


void initList(List *pList,int eleSize)
{
    pList->ptr=malloc(sizeof(Node)+eleSize);
    pList->ptr->next=NULL;
    pList->eleSize=eleSize;
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

void printList(const List *pList,void(*print)(const void *))
{
    Node *ptr=pList->ptr->next;
    printf("[");
    while(ptr)
    {
        //printf("%d",ptr->data);
        print(ptr+1);
        printf((ptr->next)?", ":"");
        ptr=ptr->next;
    }
    printf("]\n");
}

void insertFirstNode(List *pList,const void *pData)
{
    Node *p=malloc(sizeof(Node)+pList->eleSize);
    memcpy(p+1,pData,pList->eleSize);
    p->next=pList->ptr->next;
    pList->ptr->next=p;
}

void insertNode(List *pList,const void *pPrevData,const void *pData)
{
    Node *ptr=pList->ptr->next;
    while(ptr)
    {
        if(memcmp(pPrevData,ptr+1,pList->eleSize)==0)
            break;
        ptr=ptr->next;
    }
    if(ptr)
    {
        Node *p=malloc(sizeof(Node)+pList->eleSize);
       // p->data=data;
        memcpy(p+1,pData,pList->eleSize);
        p->next=ptr->next;
        ptr->next=p;
    }

}

void deleteNode(List *pList,const void *pData)
{
    Node *ptr=pList->ptr->next;
    Node *ptr2=pList->ptr;
    
    while(ptr)
    {
        if(memcmp(pData,ptr+1,pList->eleSize)==0)
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
