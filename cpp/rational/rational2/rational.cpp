#include "rational.h"
#include <cassert>
#include <iostream>

Rational::Rational(int nu,int de)
{
    assert(de != 0);
    this->nu=nu;
    this->de=de;
}

Rational::~Rational()
{
    
}

int Rational::num()
{
    return this->nu;
}

int Rational::den()
{
    return this->de;
}

void Rational::num(int nu)
{
    this->nu =nu;
}

void Rational::den(int de)
{
    assert(de != 0);
    this->de =de;
}

Rational Rational::operator+(const Rational &rhs)
{
    Rational result(this->nu*rhs.de+rhs.nu*this->de,this->de*rhs.de);
    return result;
}
Rational Rational::operator-(const Rational &rhs)
{
    Rational result(this->nu*rhs.de-rhs.nu*this->de,this->de*rhs.de);
    return result;
}
    

Rational& Rational::operator=(const Rational &rhs)
{
    this->nu=rhs.nu;
    this->de=rhs.de;
    
    return *this;
}
Rational& Rational::operator+=(const Rational &rhs)
{    
    this->nu=this->nu+rhs.nu;
    this->de=this->de+rhs.de;
    
    return *this;
}

bool Rational::operator==(const Rational &rhs)
{
    return (this->nu*rhs.de==rhs.nu*this->de);
}
bool Rational::operator!=(const Rational &rhs)
{
    return (this->nu*rhs.de!=rhs.nu*this->de);
}
 
bool Rational::operator>(const Rational &rhs)
{
    return (this->nu*rhs.de>rhs.nu*this->de);
}


