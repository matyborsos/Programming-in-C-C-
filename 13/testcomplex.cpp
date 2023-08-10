/* CH-230-A
   a13 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv) {
    Complex fstNr, sndNr;

     // Oopens the files
     ifstream in1("in1.txt");
     ifstream in2("in2.txt");
     
     if (!in1.good()) { // checks if it didn't open successfully
          cerr << "An error occured while opening the first file!" << endl;
          exit(1);
     }

     if (!in2.good()) { // checks if it didn't open successfully
          cerr << "An error occured while opening the second file!" << endl;
          exit(1);
     }

     // Open the output file while also trunchiating it
     ofstream out("output.txt", ios::trunc);
     if (!out.good()) { // checks if it didn't open successfully
          cerr << "An error occured while opening the output file!" << endl;
          exit(2);
     }

     // checks if all the files are open
     if (in1.is_open() && in2.is_open() && out.is_open()) 
     {
          in1 >> fstNr;
          in2 >> sndNr;
          cout << "The sum of the complex numbers is: " << fstNr + sndNr << endl;
          out <<  "The sum of the complex numbers is: " << fstNr + sndNr << endl;
          cout << "The difference of the complex numbers is: " << fstNr - sndNr << endl;
          out <<  "The difference of the complex numbers is: " << fstNr - sndNr << endl;
          cout << "The product of the complex numbers is: " << fstNr * sndNr << endl;
          out <<  "The product of the complex numbers is: " << fstNr * sndNr << endl;
     } 
     else 
          cout << "At least one of the file didn't open!";

     // closes the files
     in1.close();
     in2.close();
     out.close();

     return 0;
}
