#include <iostream>
#include "rational.h"
using std::cout;
using std::endl;


int main()
{
    Rational r1(3,4);       //3/4
    //Complex c2(3.0);      //3/1
    Rational r2=1;
    Rational r3;            //1/1
    
    r3.num(r1.num());
    r3.den(r1.den());

    r3=r1+r2;
    cout << "r1 : (" <<r1.num()<<"/"<<r1.den()<<")"<<endl; 
    cout << "r2 : (" <<r2.num()<<"/"<<r2.den()<<")"<<endl; 
    cout << "r3 : (" <<r3.num()<<"/"<<r3.den()<<")"<<endl; 
    r1+=r2;
    cout << "r1 : (" <<r1.num()<<"/"<<r1.den()<<")"<<endl; 
    cout << "r2 : (" <<r2.num()<<"/"<<r2.den()<<")"<<endl; 
    cout << "r3 : (" <<r3.num()<<"/"<<r3.den()<<")"<<endl; 
    r3=r1;
    cout << "r1 : (" <<r1.num()<<"/"<<r1.den()<<")"<<endl; 
    cout << "r2 : (" <<r2.num()<<"/"<<r2.den()<<")"<<endl; 
    cout << "r3 : (" <<r3.num()<<"/"<<r3.den()<<")"<<endl; 
    if(r1==r3)
        cout<<" r1 and r3 are equal "<<endl;
    else
        cout<<" r1 and r3 are not equal "<<endl;
    if(r1>r2)
        cout<<" r1 is bigger than r2 "<<endl;
    else
        cout<<" r1 is smaller than r1 "<<endl;

    return 0;
}
