#include <iostream>
#include "complex.h"

int main()
{
    Complex c1(3.0,4.0);     //3.0 4.0i
    //Complex c2(3.0);       //3.0 0,0i
    Complex c2=3.0;
    Complex c3;              //0.0 0,0i
    
    c3.real(c1.real());
    c3.imag(c1.imag());
    
    //c3=&c1+&c2;
    //c3=operator+(&c1,&c2);
    c3=c1+c2;
    //c3=operator+(c1,c2);

    std::cout << "c1 : (" <<c1.real()<<", "<<c1.imag()<<"i)"<<std::endl; 
    std::cout << "c2 : (" <<c2.real()<<", "<<c2.imag()<<"i)"<<std::endl; 
    std::cout << "c3 : (" <<c3.real()<<", "<<c3.imag()<<"i)"<<std::endl; 
    
    return 0;
}
