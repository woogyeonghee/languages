#include <iostream>
#include "complex.h"

using std::cout;
using std::endl;

int main()
{
    Complex c1;
    Complex c2=3.0;
    Complex c3(3.0,4.0);
    Complex c4=c3;

    c1.real(c3.real());
    c1.imag(c3.imag());

    c1=c3;
    c1=3.0;//complex tmp(3.0); c1=tmp; tmp.~Complex()
    if(c1==c3)
        cout<<"c1 and c2 are equal"<<endl;
    else
        cout<<"c1 and c2 are not equal"<<endl;

    c4=c1+c2;

    cout<<" c1: (" <<c1.real()<<", "<<c1.imag()<<"i)"<<endl;
    cout<<" c1: "<<c1<<endl;//cout.opertator<<(c1) or operator<<(cout,c1)


    return 0;
}
