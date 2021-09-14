#ifndef COMPLEX_H
#define COMPLEX_H

class Complex 
{
public:
    Complex(double re=0.0,double im=0.0);
    
    //copy constructor
    //Complex(Complex c); infinite copu
    //Complex(const Complex *pc);
    Complex(const Complex &rhs);
    ~Complex();
   
    Complex& operator=(const Complex &rhs);
    Complex& operator+=(const Complex &rhs);
    
    const Complex operator+(const Complex &rhs);
    const Complex operator-(const Complex &rhs);

    bool operator==(const Complex &rhs);
    bool operator!=(const Complex &rhs);
    bool operator>(const Complex &rhs);
    double real();
    double imag();

    void real(double re);
    void imag(double im);

private:
    double re;
    double im;
};

#endif

