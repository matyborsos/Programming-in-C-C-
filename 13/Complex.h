/* CH-230-A
   a13 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>

class Complex {

private:  // internal implementation is hidden
	int real;  // real part
	int imag;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(int,int = 0); // constructor taking values for real and
							   // imaginary parts. Imaginary defaults to 0
    Complex(Complex& nr);      // copy constructor
    ~Complex();                // destructor

	// setter methods
	void setRealpart(int newreal);
	void setImagpart(int newimag);

	// getter method
	int getRealpart();
	int getImagpart();

    // service method, overloaded functions
    friend ostream& operator<<(ostream &out, const Complex &CNr);
    friend istream& operator>>(istream& in, Complex &CNr);
	Complex operator+(const Complex& SndCNr);
    Complex operator-(const Complex& SndCNr);
    Complex operator*(const Complex& SndCNr);
	Complex& operator=(const Complex& CNr);

	void print();              // prints it to the screen
};
