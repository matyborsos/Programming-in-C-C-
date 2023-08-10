#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) : Rectangle(n,a,a) {
    length = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	cout << "calcArea of Square...";
	return length * length;
}

double Square::calcPerimeter() const {
	cout << "calcPerimeter of Square...";
	return (4 * length);
}
