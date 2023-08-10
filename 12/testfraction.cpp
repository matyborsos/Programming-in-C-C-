#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction First, Second;
 
    // The program should be able to enter two fractional numbers
    cin >> First >> Second;
 
    // Then the product and quotient are printed on the screen
    cout << "Their product: " << First * Second << endl;
    cout << "Their quotient " << First / Second << endl;
 
    return 0;
}
