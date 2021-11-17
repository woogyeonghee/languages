#include "complex.h"



Complex::Complex(double re,double im)
{
    this->re=re;
    this->im=im;
}

Complex::Complex(const Complex &rhs)
{
    this->re=rhs.re;
    this->im=rhs.im;
}

Complex::~Complex()
{

}

Complex& Complex::operator=(const Complex &rhs)
{
    this->re=rhs.re;
    this->im=rhs.im;
    
    return *this;
}

Complex& Complex::operator+=(const Complex &rhs)
{
    this->re=this->re+rhs.re;
    this->im=this->im+rhs.im;

    return *this;
}

const Complex Complex::operator+(const Complex &rhs)
{
    Complex result(this->re+rhs.re,this->im+rhs.im);
    
    return result;
}

const Complex Complex::operator-(const Complex &rhs)
{
    Complex result(this->re-rhs.re,this->im-rhs.im);
    
    return result;
}

bool Complex::operator==(const Complex &rhs)
{
    return (this->re==rhs.re && this->im==rhs.im);
}

bool Complex::operator!=(const Complex &rhs)
{
    //return !this->operator==(rhs);
    return (this->re!=rhs.re || this->im!=rhs.im);
}

bool Complex::operator>(const Complex &rhs)
{
    //return(sqrt(this->re*this->re+this->im*this->im)>sqrt(rhs.re*rhs.re+rhs.im*rhs.im))
    return ((this->re*this->re+this->im*this->im)>(rhs.re*rhs.re+rhs.im*rhs.im));
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
    this->re=re;
}

void Complex::imag(double im)
{
    this->im=im;
}
