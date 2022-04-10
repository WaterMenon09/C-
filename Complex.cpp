#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){
    Real=0;
    Imaginary=0;
}

Complex::Complex(int r, int i){
    Real=r;
    Imaginary=i;
}

Complex::void print(){
    if (Complex.imaginary<0)
        cout << real << " - " << -Complex.imaginary << "i\n";
    else
        cout << real << " + " << Complex.imaginary << "i\n";
}
Complex operator+(Complex a,Complex b)
{
    Complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c
}
