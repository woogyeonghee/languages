#include <iostream>
#include "queue.h"

int main ()
{
    Queue s1(100),s2(10);
    
    int i,re;
    s1.push(100);
    s1.push(200);
    s1.pop(&re);
    std::cout<<"1st pop() : "<<re<<std::endl;
    s1.push(300);
    s1.pop(&re);
    std::cout<<"2st pop() : "<<re<<std::endl;
    s1.pop(&re);
    std::cout<<"3st pop() : "<<re<<std::endl;


    s2.push(400);
    s2.push(500);
    s2.pop(&re);
    std::cout<<"3st pop() : "<<re<<std::endl;
    s2.push(600);
    s2.pop(&re);
    std::cout<<"3st pop() : "<<re<<std::endl;
    s2.pop(&re);
    std::cout<<"3st pop() : "<<re<<std::endl;
    
    return 0;
}
