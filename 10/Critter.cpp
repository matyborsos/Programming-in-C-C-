/* CH-230-A
   a10 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

// Construct Critter with no parameters
Critter::Critter() {  // set the name to "default_critter",
                      // the height to 5 and the rest to 0
    name = "default_critter";
    height = 5;
    boredom = hunger = 0;
    cout << "Constructor with no parameters has been called" << endl;
}

// Construct Critter object with name parameter
Critter::Critter(string Name) : name(Name)  {  //  set the height to 5 and the rest to 0

    height = 5;
    boredom = hunger = 0;
    cout << "Constructor with name parameter has been called" << endl;
}

// Construct Critter object with all parameters
Critter::Critter(string Name, int h, int b, double hg) {

    name = Name;
    hunger = Hideconv(h);
    boredom = b;
    height = hg;
    cout << "Constructor with all parameters has been called" << endl;
}

int Critter::UnHideconv() {
    // returns the integer value by multiplying the hunger hunger level with 10
    return ((int) (hunger * 10));
}

double Critter::Hideconv(int H) {
    // returns the double value by dividing the hunger level and 10
    return ((double) H)/ 10;
}

void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newHunger) {
    hunger = Hideconv(newHunger);
}

void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << getHunger()
    << ". My boredom is " << boredom
    << " and my height is " << height << "." << endl;
}

int Critter::getHunger() {
    return UnHideconv();
}
