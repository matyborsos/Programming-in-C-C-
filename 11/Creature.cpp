/* CH-230-A
   a11 p3.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{
    cout << "Creature Constructor has been called!\n";
}    

Creature::~Creature() {
    cout << "The Creature has been destroyed!\n";
}  

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard Constructor has been called!\n";
}  

Wizard::~Wizard() {
    cout << "The Wizard has been destroyed!\n";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Werewolf::Werewolf() : distContor(7)
{
    cout << "Werewolf Constructor has been called!\n";
}  

Werewolf::~Werewolf() {
    cout << "The Werewolf has been destroyed!\n";
}

void Werewolf::jump() const
{
    cout << "jumping " << (distContor * distance) << " meters!\n";
}

Vampire::Vampire() : distMeter(12)
{
    cout << "Vampire Constructor has been called!\n";
}  

Vampire::~Vampire() {
    cout << "The Vimpire has been destroyed!\n";
}

void Vampire::walk() const
{
    cout << "walking " << (distMeter * distance) << " meters!\n";
}

