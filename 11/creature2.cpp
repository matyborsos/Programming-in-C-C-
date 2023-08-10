/* CH-230-A
   a11 p2.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

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

class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

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

class Werewolf : public Creature {
	public:
		Werewolf();
        ~Werewolf();
		void jump() const;

	private:
		int distContor;
};

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

class Vampire : public Creature {
	public:
		Vampire();
        ~Vampire();
		void walk() const;

	private:
		int distMeter;
};

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
