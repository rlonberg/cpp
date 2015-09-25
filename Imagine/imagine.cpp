/*Compile with "g++ imagine.cpp -o imagine"*/

/*

  imagine.cpp defines a class for imaginary numbers, called Imag, with two members functions implemeting +,*, and << on imaginary numbers.

This is a good example of how c++ allows operator overloading.



*/

#include <iostream>
#include "imagine.h"

using namespace std;
using std::ostream;

Imag::Imag(double d0, double d1) {real = d0; imag = d1;}

Imag Imag::add(Imag im) {
  double real_result = im.real + real;
  double imag_result = im.imag + imag;
  Imag result = Imag(real_result,imag_result);

  return result;
}

Imag Imag::mult(Imag im) {
  double real_result = (im.real * real) - (im.imag*imag);
  double imag_result = (real*im.imag) + (imag*im.real);
  Imag result = Imag(real_result,imag_result);
    
  return result;
}


Imag operator+(Imag n1, Imag n2) {
  return n1.add(n2);
}

Imag operator*(Imag n1, Imag n2) {
  return n1.mult(n2);
}


ostream & operator<<(ostream &cout, Imag n) {
  cout << n.real << " + i" << n.imag << endl;
}



int main(){
  Imag n1 = Imag(0.3, 0.2);
  Imag n2 = Imag(0.6, 0.75);
  cout << n1 << endl;
  cout << n2 << endl;
  cout <<"n1 + n2 = " << (n1+n2) << endl;
  cout << "n1 * n2 = " << (n1*n2) << endl;
  cout << "n1 * n1 * n1 * n1 = " << (n1 * n1 * n1 * n1) << endl;
       
}
