#include <cstdio>
#include "complex.h"

//(#,#i),(#,#),(#),#
std::istream& operator>>(std::istream& in,Complex& rhs)
{
    double re=0.0;
    double im=0.0;
    
    char c;
    in>>c;
    if(c =='(')
    {
        in >>re >>c;
        if (c==',')
            in >> im >> c;
        if (c=='i')
            in >> c;
        if (c!=')')
            in.clear(std::ios_base::failbit);
    }
    else
    {
        in.putback(c);
        in>>re;
    }
    
    if(in)
        rhs=Complex(re,im);
    return in;
}

std::ostream& operator<<(std::ostream& out,const Complex& rhs)
{
    out<<"("<<rhs.re_<<", "<<rhs.im_<<"i)";

    return out;
}

Complex::Complex(double re,double im)
: re_(re), im_(im) //constructor initialization list
{ }
    
bool Complex::operator==(const Complex& rhs) const
{
    return (re_==rhs.re_ && im_==rhs.im_);
}

const Complex Complex::operator+(const Complex& rhs) const
{
    Complex result(re_+rhs.re_,im_+rhs.re_);

    return result;
}

Complex& Complex::operator++()
{
    *this=*this+1;
    //*this=*this+Complex(1.0);
    return *this;
}

Complex Complex::operator++(int )
{
    Complex result(*this);
    *this=*this+1.0;

    return result;
}

Complex::operator std::string() const
{
    char buf[100];
    sprintf(buf,"(%f,%fi)",re_,im_);

    std::string result(buf);
    return result;
}

double Complex::real() const
{
    return re_;
}

double Complex::imag() const
{
    return im_;
}

void Complex::real(double re)
{
    re_=re;
}

void Complex::imag(double im)
{
    im_=im;
}



