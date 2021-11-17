#include "complex.h"

std::ostream& operator<<(std::ostream& out , const Complex& rhs)
{
    out <<"("<<rhs.re<<", "<<rhs.im<<"i)";

    return out;
}

Complex::Complex(double re,double im)
{
    this->re=re;
    this->im=im;
}

Complex::Complex(const Complex& rhs)
{
    this->re=rhs.re;
    this->im=rhs.im;
}

Complex::~Complex()
{

}

Complex& Complex::operator=(const Complex &rhs)
{
    this->re =rhs.re;
    this->im=rhs.im;

    return *this;
}

Complex& Complex::operator=(double re)
{
    this->re=re;
    this->im=0.0;

    return *this;
}

bool Complex::operator==(const Complex& rhs) const
{
    return (this->re ==rhs.re && this->im == rhs.im);
}

const Complex Complex::operator+(const Complex& rhs) const
{
    Complex result (this->re + rhs.re,this->im +rhs.im);

    return result;
}


double Complex::real() const
{
    return this->re;
}

double Complex::imag() const
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
