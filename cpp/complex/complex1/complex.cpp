#include <iostream>
#include "complex.h"
/*
Complex operator +(const Complex *pc1,const Complex *pc2)
{
    Complex result(pc1->re+pc2->re,pc1->im+pc2->im);

    return result;
}
*/
Complex operator +(Complex &lhs,Complex &rhs)
{
    Complex result(lhs.real()+rhs.real(),lhs.imag()+rhs.imag());

    return result;
}

Complex::Complex()
{
    this->re=0.0;
    this->im=0.0;
}

Complex::Complex(double re)
{
    this->re=re;
    this->im=0.0;
}

Complex::Complex(double re,double im)
{
    this->re=re;
    this->im=im;
}

Complex::~Complex()
{
    
}

double Complex::real()
{
    return this->re;
}

double Complex::imag()
{
    return this->im;
}

void Complex::real(double re)
{
    this->re =re;
}

void Complex::imag(double im)
{
    this->im =im;
}


