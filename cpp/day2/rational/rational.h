#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational();                      //default constructor
    Rational(int nu);             //convert. constructor
    Rational(int nu, int de);  //constructor
    ~Rational();                     //destructor

    int num();
    int den();

    void num(int nu);
    void den(int de);
    
    Rational operator+(const Rational &rhs);

private:
    int nu;
    int de;

};

#endif
