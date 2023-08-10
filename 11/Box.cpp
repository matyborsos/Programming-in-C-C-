/* CH-230-A
   a11 p1.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;  // for cout

Box::Box() {  // sets everything to 0
    height = width = depth = 0;
}
Box::Box(double h, double w, double d) {  // initializes it to a given set of data
    height = h;
    width = w;
    depth = d;

}

Box::Box(const Box& B) : height(B.height), width(B.width), depth(B.depth) {
    // copies data members
}

Box::~Box()  {
    // empty destructor
}


void Box::setHeight(double newheight) {
    height = newheight;
}
void Box::setWidth(double newwidth) {
    width = newwidth;
}
void Box::setDepth(double newdepth) {
    depth = newdepth;
}


double Box::getHeight() {
    return height;
}
double Box::getWidth() {
    return width;
}
double Box::getDepth() {
    return depth;
}

