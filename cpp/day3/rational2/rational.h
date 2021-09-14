#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational(int nu=0, int de=1);  //constructor
    ~Rational();                     //destructor

    int num();
    int den();

    void num(int nu);
    void den(int de);
    
    Rational operator+(const Rational &rhs);
    Rational operator-(const Rational &rhs);
    
    Rational& operator=(const Rational &rhs);
    Rational& operator+=(const Rational &rhs);
    
    bool operator==(const Rational &rhs);
    bool operator!=(const Rational &rhs);
    bool operator>(const Rational &rhs);


private:
    int nu;
    int de;

};

#endif
