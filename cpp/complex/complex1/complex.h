#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    Complex();                      //default constructor
    Complex(double re);             //convert. constructor
    Complex(double re, double im);  //constructor
    ~Complex();                     //destructor

    double real();
    double imag();

    void real(double re);
    void imag(double im);

private:
    double re;
    double im;

};

//Complex operator +(const Complex *pc1,const Complex *pc2);
Complex operator +(Complex &lhs,Complex &rhs);

#endif
