/* CH-230-A
   a11 p3.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Creature.h"

using namespace std;

int main()
{ 
    // Creating a creature:
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    // Creating a wizard:
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    // Creating a werewolf:
    cout << "\nCreating a Werewolf.\n";
    Werewolf we;
    we.run();
    we.jump();

    // Creating a vampire:
    cout << "\nCreating a Vampire.\n";
    Vampire v;
    v.run();
    v.walk();

    return 0;
} 