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
complex::operator+=(const complex &) {
  return __doapl(this, r)
}
#endif //__complex__
