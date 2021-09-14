#include "list.h"

int main(void)
{
    List list;

    list.insertFirstNode(4);
    list.insertFirstNode(3);
    list.insertFirstNode(2);
    list.insertFirstNode(1);
    list.insertNode(1,2);
    list.deleteNode(3);

    list.print();

    return 0;
}

