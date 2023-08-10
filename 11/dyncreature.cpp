/* CH-230-A
   a11 p4.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Creature.h"

using namespace std;

int main()
{
    string word;
    getline(cin, word); // Get first line of input outside the loop

    while(word != "quit")
    {
        int ch;
        // checks what word was read to know what creature to create
        if(word == "wizard")
            ch=1;
        else
            if(word == "object1")
                ch=2;
            else
                ch=3;
        // the program uses a switch
        switch (ch)
        {
            case 1:
                {
                    cout << "\nCreating a Wizard.\n";
                    Wizard *w = new Wizard;
                    (*w).run();
                    (*w).hover();
                    delete w;
                    break;
                }
            case 2:
                {
                    cout << "\nCreating a Werewolf.\n";
                    Werewolf *we = new Werewolf;
                    (*we).run();
                    (*we).jump();
                    delete we;
                    break;
                }
            case 3:
                {
                    cout << "\nCreating a Vampire.\n";
                    Vampire *v = new Vampire;
                    (*v).run();
                    (*v).walk();
                    delete v;
                    break;
                }
            default:
                break;
        }
        getline(cin, word); // gets the next input
    }

    return 0;
}
