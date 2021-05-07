#include <iostream>
#include"complex.h"

using namespace std;
int main() {
  complex c1(2, 1);
  complex c2(4, 3);
  cout << c1 + c2 << endl;
  cout << (c1 += c1) << endl;
  cout << (5 + c2) << endl;
  cout << "Hello, World!" << endl;
  return 0;
}
