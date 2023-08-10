#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
	cout << "calcPerimeter of Circle...";
	return (2 * M_PI * radius);
}
