/* CH-230-A
   a12 p1.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

Hexagon::Hexagon(const string& n, double nx, double ny, int nl,
                 int s, const string& c) : RegularPolygon(n,nx,ny,nl)
{
    side = s;
    color = c;
    cout << "Parametric constructor for the "
         << color << " hexagon with side length "
         << side << " called!" << endl;
}

Hexagon::Hexagon(const Hexagon& H) : RegularPolygon(H.name, H.x, H.y,
													  H.EdgesNumber) {
	side = H.side;
	color = H.color;
	cout << "Copy Constructed for the "
		 << color << " hexagon with side length "
		 << side << " called!" << endl;
}

Hexagon::~Hexagon() {
	cout << "Destructor called!\n";
}

void Hexagon::setSide(int newside) {
    side = newside;
}

void Hexagon::setColor(const string& newcolor) {
    color = newcolor;
}


int Hexagon::getSide() const {
    return side;
}

string Hexagon::getColor() const {
    return color;
}

int Hexagon::Perimeter() const {
    return 6 * getSide();
}

double Hexagon::Area() const {
    return ((3 * sqrt(3)) / 2) * getSide() * getSide();
}
