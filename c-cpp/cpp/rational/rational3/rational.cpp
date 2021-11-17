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

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
    out << rhs.num_ <<"/"<<rhs.den_;

    return out;
}

Rational::Rational(int num,int den)
{
    int gcd=findGCD(num,den);
    this->num_=num/gcd;
    this->den_=den/gcd;
}

Rational::Rational(const Rational& rhs)
{
    this->num_=rhs.num_;
    this->den_=rhs.den_;
}

Rational::~Rational()
{

}
Rational& Rational::operator=(const Rational& rhs)
{
    this->num_=rhs.num_;
    this->den_=rhs.den_;
    
    return *this;
}

Rational& Rational::operator=(int num)
{
    this->num_ =num;
    this->den_ =1;

    return *this;
}
bool Rational::operator==(const Rational& rhs) const
{
    return this->num_ ==rhs.num_&&this->den_==rhs.den_;
}

const Rational Rational::operator+(const Rational& rhs) const
{
    Rational result(this->num_*rhs.den_+rhs.num_*this->den_,this->den_*rhs.den_);

    return result;
}

int Rational::num() const
{
    return this->num_;
}

int Rational::den() const
{
    return this->den_;
}

void Rational::num(int num)
{
    this->num_=num;
}

void Rational::den(int den)
{
    this->den_=den;
}
