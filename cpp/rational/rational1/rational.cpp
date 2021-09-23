#include "rational.h"
#include <cassert>
#include <iostream>
/*
Rational operater +(const Rational &rhs,const Rational &rhs)
{
    Rational result;

    return result;
}
*/

Rational::Rational()
{
    this->nu=0;
    this->de=1;
}

Rational::Rational(int nu)
{
    this->nu=nu;
    this->de=1;
}

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
    //abbreviation
    return result;
}
