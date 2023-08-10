#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimeter() const {
	cout << "calcPerimeter of Rectangle...";
	return (2 * (length + width));
}
