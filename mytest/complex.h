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
  return *ths
}

inline complex&
complex::operator += (const complex& r) {
  return __doapl(this, r)
}

// Non-member function
inline complex
operator + (const complex& x, const complex& y){
  retrun complex(real(x) + real(y), imag(x) + imag(y));
}

inline complex
operator + (const double x, const complex& y){
  retrun complex(x + real(y), imag(y));
}

inline complex
operator + (const complex& x, const double y){
  retrun complex(real(x) + y, imag(x));
}


#endif //__complex__
