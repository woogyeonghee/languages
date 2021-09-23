#include "rational.h"

static int findGCD(int a,int b)
{
    do{
        int remain=a%b;
        a=b;
        b=remain;
    }while (b);

    return a;
}

void Rational::abbreviate()
{
    int gcd = findGCD(num_,den_);
    num_ = num_/gcd;
    den_ = den_/gcd;
}

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
    out << rhs.num_ <<"/"<<rhs.den_;

    return out;
}

Rational::Rational(int num,int den)
: num_(num), den_(den) 
{
    this->abbreviate();
}

bool Rational::operator==(const Rational& rhs) const
{
    return num_ ==rhs.num_&&den_==rhs.den_;
}

const Rational Rational::operator+(const Rational& rhs) const
{
    Rational result(num_*rhs.den_+rhs.num_*den_,den_*rhs.den_);

    return result;
}

int Rational::num() const
{
    return num_;
}

int Rational::den() const
{
    return den_;
}

void Rational::num(int num)
{
    num_=num;
}

void Rational::den(int den)
{
    den_=den;
}
