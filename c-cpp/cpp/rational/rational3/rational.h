#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>


class Rational
{
friend std::ostream& operator<<(std::ostream& out,const Rational& rhs);
public:
    Rational(int num = 0,int den = 1);
    Rational(const Rational& rhs);
    ~Rational();
    
    Rational& operator=(const Rational& rhs);
    Rational& operator=(int num);

    bool operator==(const Rational& rhs) const;

    const Rational operator+(const Rational& rhs) const;

    int num() const;
    int den() const;

    void num(int num);
    void den(int den);


private:
    int num_;
    int den_;
};

#endif
