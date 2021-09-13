//#include <cstdio>
#include "a.h"
#include <iostream>

int main ()
{
	Stack s1(100),s2(10);
	//s1.tos=0;
	//s2.tos=0;	

	s1.push(100);
	s1.push(200);
	s1.push(300);

	int re;
    /*
	s1.pop(&re); printf("s1 1st pop() : %d\n",re);
	s1.pop(&re); printf("s1 2st pop() : %d\n",re);
	s1.pop(&re); printf("s1 3st pop() : %d\n",re);
	*/
    s1.pop(&re);
    std::cout<< "s1 1st pop(): "<< re<<std::endl;
    s1.pop(&re);
    std::cout<< "s1 2st pop(): "<< re<<std::endl;
    s1.pop(&re);
    std::cout<< "s1 3st pop(): "<< re<<std::endl;
	
    s2.push(900);
	s2.push(800);
	s2.push(700);


    s2.pop(&re);
    std::cout<< "s2 1st pop(): "<< re<<std::endl;
    s2.pop(&re);
    std::cout<< "s2 2st pop(): "<< re<<std::endl;
    s2.pop(&re);
    std::cout<< "s2 3st pop(): "<< re<<std::endl;

	return 0;
}
