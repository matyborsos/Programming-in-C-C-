/* CH-230-A
   a10 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv) {
	City Bremen, Paris, London;

	// the program sets values for each data member of the three instances
	Bremen.setName("Bremen");
	Bremen.setNrInhabitants(567000);
	Bremen.setMayor("Andreas Bovenschulte");
	Bremen.setArea(326.7);

	Paris.setName("Paris");
	Paris.setNrInhabitants(2139907);
	Paris.setMayor("Anne Hidalgo");
	Paris.setArea(1054);

	London.setName("London");
	London.setNrInhabitants(9541000);
	London.setMayor("Sadiq Khan");
	London.setArea(1572);

	// and then it outputs the data members of each instance
	// through the public print method
	Bremen.print();
	Paris.print();
	London.print();

	return 0;
}
