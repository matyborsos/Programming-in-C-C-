/* CH-230-A
   a10 p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;  // for cout

Complex::Complex() {  // sets everything to 0
	real = imag = 0;
}
Complex::Complex(float r, float i) {  // initializes it to a given couple.
									  // Please note that here it is
	real = r;                         // not necessary to replicate the default value for the second parameter
	imag = i;
}

Complex::Complex(Complex& nr) : real(nr.real), imag(nr.imag) {
    // copies data members
}

Complex::~Complex()  {
    // empty destructor
}


void Complex::setRealpart(int newreal) {
	real = newreal;
}
void Complex::setImagpart(int newimag) {
	imag = newimag;
}

int Complex::getRealpart() {
    return real;
}

int Complex::getImagpart() {
    return imag;
}

// Methods to perform operations on complex numbers
Complex Complex::conjugate() {
    Complex num;
    // finds the conjugate by leaving real part
    // as it is and multiplying imaginary part with -1
    num.setRealpart(getRealpart());
    num.setImagpart((-1) * getImagpart());
    return num;
}

Complex Complex::add(Complex& nr) {
    Complex num;
    // adds the two complex numbers, using getter methods
    num.setRealpart(getRealpart() + nr.getRealpart());
    num.setImagpart(getImagpart() + nr.getImagpart());
    return num;
}

Complex Complex::sub(Complex& nr) {
    Complex num;
    // subtracts the two complex numbers,
    num.setRealpart(getRealpart() - nr.getRealpart());
    num.setImagpart(getImagpart() - nr.getImagpart());
    return num;
}

Complex Complex::multiply(Complex& nr) {
    Complex num;
    // real part found using (a * c) - (b * d)
    num.setRealpart(getRealpart() * nr.getRealpart() -
                 getImagpart() * nr.getImagpart());
    // imaginary part found using (a * d) + (b * c)
    num.setImagpart(getRealpart() * nr.getImagpart() +
                      getImagpart() * nr.getRealpart());
    return num;
}


void Complex::print() {               // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}

}
