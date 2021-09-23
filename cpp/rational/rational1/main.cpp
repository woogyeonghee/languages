#include <iostream>
#include "rational.h"

int main()
{
    Rational r1(3,4);       //3/4
    //Complex c2(3.0);      //3/1
    Rational r2=1;
    Rational r3;            //1/1
    
    r3.num(r1.num());
    r3.den(r1.den());

    r3=r1+r2;
    //ri.operator+(r2) or operator+ (r1,r2)

    std::cout << "r1 : (" <<r1.num()<<"/"<<r1.den()<<")"<<std::endl; 
    std::cout << "r2 : (" <<r2.num()<<"/"<<r2.den()<<")"<<std::endl; 
    std::cout << "r3 : (" <<r3.num()<<"/"<<r3.den()<<")"<<std::endl; 
    
    return 0;
}
