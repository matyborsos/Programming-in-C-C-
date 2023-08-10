/* CH-230-A
   a10 p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv) {
    int real, imag;
    Complex fstNr, sndNr, trdNr;

    cout << "Enter the first number:" << endl
         << "Real part: ";
    cin  >> real;
    cout << "Imaginary part: ";
    cin  >> imag;

    fstNr.setRealpart(real);
    fstNr.setImagpart(imag);

    cout << "Enter the second number:" << endl
         << "Real part: ";
    cin  >> real;
    cout << "Imaginary part: ";
    cin  >> imag;

    sndNr.setRealpart(real);
    sndNr.setImagpart(imag);

    cout << "The conjugate of the first instance is: ";
    trdNr = fstNr.conjugate();
    trdNr.print();

    cout << "The sum of the two instances is: ";
    trdNr = fstNr.add(sndNr);
    trdNr.print();

    cout << "The difference between the second and first instance is: ";
    trdNr = sndNr.sub(fstNr);
    trdNr.print();

    cout << "The multiplication of the two instances is: ";
    trdNr = fstNr.multiply(sndNr);
    trdNr.print();

    return 0;
}
