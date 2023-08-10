/* CH-230-A
   a10 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    // method 1: using constructor with no parameters supplied,
    //           and the setHunger method
	Critter One;
	One.setHunger(2);
	One.print();

	// method 2: using constructor with name parameter supplied
	Critter Two("Two");
    Two.setHunger(2); // sets hunger to 2 using setHunger method
    Two.print();

    // method 3: using constructor with 3 parameters, omitting height
    Critter Three("Three", 2, 8);
    Three.print();

    // method 4: using constructor with 4 parameters
    Critter Four("Four", 2, 12, 12.6);
    Four.print();

    return 0;
}
