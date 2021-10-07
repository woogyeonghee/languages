#include <cstdio>
#include "complex.h"

#ifndef INLINE
#define inline
#include "complex.inl"
#endif

Complex *Complex::freeList=NULL;
const int Complex::BUFSIZE=256;


void *Complex::operator new(size_t size)
{
    if (size!=sizeof(Complex))
    {
        return ::operator new(size);
    }
    if (freeList ==NULL)
    {
        Complex *newBlock = static_cast<Complex *>(::operator new(256*sizeof(Complex)));
        if(newBlock==NULL)
            return NULL;

        for(int i=0; i<=BUFSIZE-1;++i)
        {
            newBlock[i].next=&newBlock[i]; 
        }
        newBlock[BUFSIZE-1].next=NULL;

        freeList = newBlock;
    }
    Complex *p = freeList;
    freeList = p->next;

    return p;
}

void Complex::operator delete(void *ptr,size_t size)
{
    if(ptr ==0)
        return;

    if(size !=sizeof(Complex))
    {
        ::operator delete(ptr);
        return;
    }

    Complex *p = static_cast<Complex *>(ptr);
    p->next=freeList;
    freeList=p;
}

//(#,#i),(#,#),(#),#
std::istream& operator>>(std::istream& in,Complex& rhs)
{
    double re=0.0;
    double im=0.0;
    
    char c;
    in>>c;
    if(c =='(')
    {
        in >>re >>c;
        if (c==',')
            in >> im >> c;
        if (c=='i')
            in >> c;
        if (c!=')')
            in.clear(std::ios_base::failbit);
    }
    else
    {
        in.putback(c);
        in>>re;
    }
    
    if(in)
        rhs=Complex(re,im);
    return in;
}


Complex::operator std::string() const
{
    char buf[100];
    sprintf(buf,"(%f,%fi)",re_,im_);

    std::string result(buf);
    return result;
}




