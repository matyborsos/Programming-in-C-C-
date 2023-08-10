/* CH-230-A
   a10 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    string name;
    double hunger; // hunger is now double
    int boredom;
    double height;

    // private methods to convert from int to double and from double to int
    int UnHideconv();
    double Hideconv(int H);

public: // business logic methods are public
    // constructors
    Critter();                 // empty constructor
    Critter(string); // constructor taking value only for the name
    Critter(string, int, int, double = 10.0);
                            // constructor taking value only for all the
                            // parameters. The height defaults to 10
    // setter methods
    void setName(string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    // getter method
    int getHunger();
    // service method
    void print();
};

