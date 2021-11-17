#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>

class Complex
{
friend std::istream& operator>>(std::istream& in,Complex& rhs);
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);
public:
    static void *operator new(size_t size);
    static void operator delete(void *ptr,size_t size);

    //Complex() { } X

    //Complex(const Complex& rhs) { copy }
    //~Complex() { }
    //Complex& operator=(const Complex& rhs) { copy / return *this }
    //Complex* operator&() { return this }
    //const Complex* operator&() const { return this }
    
    Complex(double re=0.0, double im=0.0);
    
    bool operator==(const Complex& rhs) const;

    const Complex operator+(const Complex& rhs) const;

    Complex& operator++();      //prefix
    Complex operator++(int );  //postfix
    
    operator std::string() const;


    double real() const;
    double imag() const;

    void real(double re);
    void imag(double im);


private:
    static Complex *freeList;
    static const int BUFSIZE;
    union
    {
        struct
        {
            double re_;
            double im_;
        };
        Complex *next;
    };
};

#ifdef INLINE
#include "complex.inl"
#endif
#endif
