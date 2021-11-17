#ifndef LIST_H
#define LIST_H

typedef struct node
{
    int data;
    struct node *next;
}Node;

typedef struct
{
    struct node *ptr;
}List;

void initList(List *pList);
void cleanupList(List *pList);
void printList(List *pList);

void insertFirstNode(List *pList,int data);
void insertNode(List *pList,int prevData,int data);
void deleteNode(List *pList, int data);

#endif
