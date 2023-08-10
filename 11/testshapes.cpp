/* CH-230-A
   a11 p5.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {
    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);

    r.printName();
    c.printName();

    Circle cc("Test for Circle", 2, 11, 6);
    Rectangle rr("Test for Rectangle", 1, 5, 12, 9);
    Square ss("Test for Square", 4, 4, 4);

    cout << "\nName: ";
    rr.printName();
    cout << "Perimeter: " << rr.perimeter() << "\nArea: " << rr.area();

    cout << "\nName: ";
    ss.printName();
    cout << "Perimeter: " << ss.perimeter() << "\nArea: " << ss.area();

    cout << "\nName: ";
    cc.printName();
    cout << "Perimeter: " << cc.perimeter() << "\nArea: " << cc.area();

    cout << endl;

    return 0;
}
