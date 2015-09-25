/*
header file for imagine.cpp
*/

#ifndef IMAGINE_H
#define IMAGINE_H

#include<iostream>
using std::ostream;

class Imag{
 public:
  double real;
  double imag;

  Imag() = default;
  Imag(double,double);

  Imag add(Imag);
  Imag mult(Imag);
};


Imag operator+(Imag n1, Imag n2);
Imag operator*(Imag n1, Imag n2);
ostream & operator<<(ostream &cout, Imag n);

int main();

#endif
