#include <iostream>
#include "complex.h"

using std::cout;
using std::endl;

int main()
{
    Complex c1;
    Complex c2 = 3.0;
    Complex c3(3.0,4.0);
    Complex c4(c3); //Complex c4=c3
    cout<<"c1:("<<c1.real()<<", "<<c1.imag()<<"i)"<<endl;
    cout<<"c2:("<<c2.real()<<", "<<c2.imag()<<"i)"<<endl;
    cout<<"c3:("<<c3.real()<<", "<<c3.imag()<<"i)"<<endl;
    cout<<"c4:("<<c4.real()<<", "<<c4.imag()<<"i)"<<endl;
    

    if (c3==c4)//c1.operator==(c3) or operator==(c1,c3)
        cout<<"c3 and c4 are equel" <<endl;
    else
        cout<<"c3 and c4 are not equel" <<endl;
    if (c3!=c2)//c1.operator==(c3) or operator==(c1,c3)
        cout<<"c3 and c2 are not equel" <<endl;
    else
        cout<<"c3 and c2 are equel" <<endl;
    if (c3>c2)//c1.operator==(c3) or operator==(c1,c3)
        cout<<"c3 bigger than c2" <<endl;
    else
        cout<<"c3 smaller than c2" <<endl;

    cout<<"c1:("<<c1.real()<<", "<<c1.imag()<<"i)"<<endl;
    cout<<"c2:("<<c2.real()<<", "<<c2.imag()<<"i)"<<endl;
    cout<<"c3:("<<c3.real()<<", "<<c3.imag()<<"i)"<<endl;
    cout<<"c4:("<<c4.real()<<", "<<c4.imag()<<"i)"<<endl;
    cout<<"c4=c1+c2"<<endl;
    c4=c1+c2;//const exist (c1+c2)++

    cout<<"c1:("<<c1.real()<<", "<<c1.imag()<<"i)"<<endl;
    cout<<"c2:("<<c2.real()<<", "<<c2.imag()<<"i)"<<endl;
    cout<<"c3:("<<c3.real()<<", "<<c3.imag()<<"i)"<<endl;
    cout<<"c4:("<<c4.real()<<", "<<c4.imag()<<"i)"<<endl;
    cout<<"c4+=c2"<<endl;
    
    c4+=c1;
    
    cout<<"c1:("<<c1.real()<<", "<<c1.imag()<<"i)"<<endl;
    cout<<"c2:("<<c2.real()<<", "<<c2.imag()<<"i)"<<endl;
    cout<<"c3:("<<c3.real()<<", "<<c3.imag()<<"i)"<<endl;
    cout<<"c4:("<<c4.real()<<", "<<c4.imag()<<"i)"<<endl;

    return 0;
}
