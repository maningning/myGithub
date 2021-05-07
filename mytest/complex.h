//
// Created by 马宁宁 on 2021/5/6.
//

#ifndef __COMPLEX__
#define __COMPLEX__
#include <cmath>

class complex
{
 public:
    complex(double r = 0, double i = 0)
      :re(r), im(i){}
    complex& operator += (const complex&);
    double real () const {
      return re;
    }
    double imag () const {
      return im;
    }
 private:
    double re, im;
    friend complex&__doapl(complex*, const complex&);
};

inline complex&
__doapl(complex* ths, const complex& r){
  ths -> re += r.re;
  ths -> im += r.im;
  return *ths;
}
// member function
inline complex&
complex::operator += (const complex& r) {
  return __doapl(this, r);
}

// Non-member function
inline double
real (const complex& x) {
  return x.real ();
}

inline double
imag (const complex& x) {
  return x.imag ();
}

inline complex
operator + (const complex& x, const complex& y){
  return complex(real(x) + real(y), imag(x) + imag(y));
}

inline complex
operator + (const double x, const complex& y){
  return complex(x + real(y), imag(y));
}

inline complex
operator + (const complex& x, const double y){
  return complex(real(x) + y, imag(x));
}

std::ostream&
operator << (std::ostream& os, const complex& x){
  return os << '(' << real(x) << ',' << imag(x) <<')';
}
#endif //__complex__
