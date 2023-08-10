/* CH-230-A
   a11 p6.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector(double *newpointer, int newsize) {
    pointer = newpointer;
    size = newsize;
}

Vector::Vector() {
    pointer = NULL;
    size = 0;
}

Vector::Vector(const Vector& vector) {
    pointer = new double[vector.size];
    size = vector.size;
    int i;
    for (i = 0; i < vector.size; i++) {
        pointer[i] = vector.pointer[i];
    }
}

Vector::~Vector() {
    delete [] pointer;
}

void Vector::setPointer(double *newpointer) {
    pointer = newpointer;
}

void Vector::setSize(int newsize) {
    size = newsize;
}

double* Vector::getPointer() const{
    return pointer;
}

int Vector::getSize() const {
    return size;
}

void Vector::print() const {
    cout << "[ ";
    for (int i = 0; i < getSize(); i++) {
        if (i != (getSize() - 1)) {
            cout << getPointer()[i]
                      << " , ";
        } else cout << getPointer()[i];
    }
    cout << " ]" << endl;
}

double Vector::norm() const {
    double sum = 0;
    for (int i = 0; i < getSize(); i++) {
        sum += pow(getPointer()[i], 2);
    }
    return sqrt(sum);
}

Vector Vector::add(const Vector& added) const {
    double *vector = new double[getSize()];
    Vector addition(vector, getSize());
    for (int i = 0; i < getSize(); i++)
        vector[i] = getPointer()[i] + added.getPointer()[i];

    return addition;
}

Vector Vector::subtract(const Vector& subtracted) const {
    double *vector = new double[getSize()];
    Vector subtraction(vector, getSize());
    for (int i = 0; i < getSize(); i++)
        vector[i] = getPointer()[i] - subtracted.getPointer()[i];
    return subtraction;
}

double Vector::scalarProduct(const Vector& sndvector) const {
    double scalar = 0;
    for (int i = 0; i < getSize(); i++)
        scalar = scalar + (getPointer()[i] * sndvector.getPointer()[i]);
    return scalar;
}