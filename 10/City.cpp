/* CH-230-A
   a10 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string newname) {
	name = newname;
}

void City::setNrInhabitants(int newnrInhabitants) {
	nrInhabitants = newnrInhabitants;
}

void City::setArea(double newarea){
    area = newarea;
}

void City::setMayor(string newmayor){
    mayor = newmayor;
}

void City::print() {
	cout << "The city " << getName()
		 << " has a population of: " << getNrInhabitants()
		 << " inhabitants, an area of: "<< getArea()
		 << " square kilometers and a mayor: " << getMayor() << endl;
}

int City::getNrInhabitants() {
	return nrInhabitants;
}

double City::getArea() {
	return area;
}

string City::getName() {
	return name;
}

string City::getMayor() {
	return mayor;
}
