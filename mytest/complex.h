//
// Created by 马宁宁 on 2021/5/6.
//

#ifndef __COMPLEX__
#define __COMPLEX___
#include <cmath>
class complex
{
 public:
    complex(double r = 0, double i = 0)
    :re(r), im(i){}
    complex& operator +={const complex&};
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

#endif //__complex__
