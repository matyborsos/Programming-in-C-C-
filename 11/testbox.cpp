/* CH-230-A
   a11 p1.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

int main(int argc, char **argv) {
    int n;
    double height, width, depth, vol;

    cout << "Enter the number of boxex: " << endl;
    cin  >> n;

    // the program dynamically allocates memory for 2 * n boxes
    Box *arrBox = new Box[2*n];

    // inputs each data member of each instance using setters methods
    // then, it initializes data members for the second group of instances,
    // using copy constructors
    for(int i = 0; i < n; i++) {

        cout << "Set the measurements of box " << i+1 << " and " << i+n+1 << endl;

        cin >> height;
        arrBox[i].setHeight(height);

        cin >> width;
        arrBox[i].setWidth(width);

        cin >> depth;
        arrBox[i].setDepth(depth);

        arrBox[i+n] = arrBox[i];
    }

    // outputs the volume of each instance
    for(int i = 0; i < 2*n; i++) {
        vol = arrBox[i].getHeight() * arrBox[i].getWidth() * arrBox[i].getDepth();
        cout << "Volume of box " << i+1 << " is: " << vol << endl;
    }

    delete [] arrBox;
    return 0;
}
