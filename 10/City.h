/* CH-230-A
   a10 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <string> // defines standard C++ string class

class City
{
private:  // data members are private
	string name;
	int nrInhabitants;
	double area;
	string mayor;

public: // business logic methods are public
	// setter methods
	void setName(string newname);
	void setNrInhabitants(int newnrInhabitants);
	void setArea(double newarea);
	void setMayor(string newmayor);
	// getter method
	string getName();
	int getNrInhabitants();
	string getMayor();
	double getArea();
	// service method
	void print();
};

