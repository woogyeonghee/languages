#include <iostream>
#include "rational.h"
using std::cout;
using std::endl;

int main()
{
    Rational r1;
    Rational r2=3;
    const Rational r3(9,12);
    const Rational r4=r3;

    r1.num(r3.num());
    r1.den(r3.den());
    r1=r3;
    r1=3;

    if(r1==r1)
        cout <<"r1 and r3 are equal"<<endl;
    else
        cout <<"r1 and r3 are not equal"<<endl;

    r1=r2+r3;
    
    cout<<"r1: " <<r1<<endl;
    cout<<"r2: " <<r2<<endl;
    cout<<"r3: " <<r3<<endl;
    cout<<"r4: " <<r4<<endl;



    return 0;
}

