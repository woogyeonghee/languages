#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational
{
friend std::ostream& operator<<(std::ostream& out,const Rational& rhs);
public:
    //Rational() {} 
    //Rational * operator&() { return this }
    //const Rational* operator&() const { return this }
    
    Rational(int num = 0,int den = 1);
    //Rational(const Rational& rhs) { copy }
    //~Rational()
    //Rational& operator=(const Rational& rhs) { copy / return this }
    
    bool operator==(const Rational& rhs) const;

    const Rational operator+(const Rational& rhs) const;

    int num() const;
    int den() const;

    void num(int num);
    void den(int den);

private:
    void abbreviate();  //tool func .helper func.
    int num_;
    int den_;
};

#endif
