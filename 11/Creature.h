/* CH-230-A
   a11 p3.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

class Werewolf : public Creature {
	public:
		Werewolf();
        ~Werewolf();
		void jump() const;

	private:
		int distContor;
};

class Vampire : public Creature {
	public:
		Vampire();
        ~Vampire();
		void walk() const;

	private:
		int distMeter;
};

