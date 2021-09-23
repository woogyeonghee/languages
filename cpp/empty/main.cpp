#include "empty.h"

int main()
{
    Empty e1;
    const Empty e2=e1;    
    
    e1=e2;

    Empty *ps=&e1;
    const Empty *p2= &e2;
    return 0;
}
