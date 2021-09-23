#include <iostream>
#include "complex.h"

using std::cout;
using std::endl;

int main()
{
    Complex c1;
    const Complex c2=3.0;
    const Complex c3(3.0,4.0);
    Complex c4=c3;

    c1.real(c3.real());
    c1.imag(c3.imag());

    c1=c3;
    c1=3.0;

    if(c1==c3)
        cout<<"c1 and c2 are equal"<<endl;
    else
        cout<<"c1 and c2 are not equal"<<endl;

    c4=c1+c2;

    cout<<" c1: (" <<c1.real()<<", "<<c1.imag()<<"i)"<<endl;
    cout<<" c1: "<<c1<<endl;


    return 0;
}
