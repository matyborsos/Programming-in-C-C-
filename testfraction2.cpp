#include <iostream>
#include "fraction.h"
 
using namespace std;
 
int main(void)
{
    Fraction First, Second;
 
    // The program should be able to enter two fractional numbers
    cin >> First >> Second;
 
    // It determines the greater fraction and print it on the screen
    if(First > Second)
        cout << First << " is the greater fraction.\n";
    else
        cout << Second << " is the greater fraction.\n";
    
    // Then the sum and the difference of the two fractions 
    // are printed on the screen
    cout << "Their sum: " << First + Second << endl;
    cout << "Their difference: " << First - Second << endl;
 
    return 0;
}
