/* CH-230-A
   a12 p1.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

    // creates the three instances, using parametic and copy contructors
    Hexagon First("First", 0, 0, 6, 9, "blue");
    Hexagon Second("Second", 0, 0, 6, 15, "green");
    Hexagon Third(Second);

    // prints the perimeter and the area of the first hexagon
    cout << "The perimeter of the first hexagon is: " << First.Perimeter()
         << ", and its area is: " << First.Area() << endl;

    // prints the perimeter and the area of the second hexagon
    cout << "The perimeter of the second hexagon is: " << Second.Perimeter()
         << ", and its area is: " << Second.Area() << endl;

    // prints the perimeter and the area of the third hexagon
    cout << "The perimeter of the third hexagon is: " << Third.Perimeter()
         << ", and its area is: " << Third.Area() << endl;

    return 0;
}
