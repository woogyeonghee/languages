inline std::ostream& operator<<(std::ostream& out,const Complex& rhs)
{
    out<<"("<<rhs.re_<<", "<<rhs.im_<<"i)";

    return out;
}

inline Complex::Complex(double re,double im)
: re_(re), im_(im) //constructor initialization list
{ }
    
inline bool Complex::operator==(const Complex& rhs) const
{
    return (re_==rhs.re_ && im_==rhs.im_);
}

inline const Complex Complex::operator+(const Complex& rhs) const
{
    Complex result(re_+rhs.re_,im_+rhs.re_);

    return result;
}

inline Complex& Complex::operator++()
{
    *this=*this+1;
    //*this=*this+Complex(1.0);
    return *this;
}

inline Complex Complex::operator++(int )
{
    Complex result(*this);
    *this=*this+1.0;

    return result;
}

inline double Complex::real() const
{
    return re_;
}

inline double Complex::imag() const
{
    return im_;
}

inline void Complex::real(double re)
{
    re_=re;
}

inline void Complex::imag(double im)
{
    im_=im;
}
