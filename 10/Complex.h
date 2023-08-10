/* CH-230-A
   a10 p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <string>

class Complex {

private:  // internal implementation is hidden
	float real;  // real part
	float imag;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(float, float = 0); // constructor taking values for real and
							   // imaginary parts. Imaginary defaults to 0
    Complex(Complex& nr);      // copy constructor
    ~Complex();                // destructor

	// setter methods
	void setRealpart(int newreal);
	void setImagpart(int newimag);

	// getter method
	int getRealpart();
	int getImagpart();

    // service method
    Complex add(Complex& num);
    Complex sub(Complex& num);
    Complex multiply(Complex& num);
    Complex conjugate();

	void print();              // prints it to the screen
};
