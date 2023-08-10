#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(int argc, char** argv) {
    
    // empty constructor test
    Player First;
    First.print();
    First.printPlayer();
    
    // set some data members to the first Instance using setter functions 
    First.setDominantFoot("Left");
    First.setNumber(9);
    First.setPosition("Center Forward");
    First.print();
    First.printPlayer();


    // c_str() used to return a constant char pointer of each string
    string firstname = "Paul";
    const char *firstName = firstname.c_str();
    string lastname = "Enderson";
    const char *lastName = lastname.c_str();
    string dateofbirth = "1984-10-02";
    const char *dateOfBirth = dateofbirth.c_str();

    string location = "London";
    string role = "Player";
    string position = "Midfielder";
    string foot = "Right";

    // parametric constructor test
    Player Second(firstName, lastName, dateOfBirth, location, role, 
                          true, 13, position, 6, foot);
    
    Second.print();
    Second.printPlayer();

    // copy constructor test
    Player Third(Second);

    Third.print();
    Third.printPlayer();

    TournamentMember::changeLocation("Paris");

    // outputs all the instances to see the changes
    First.print();
    First.printPlayer();

    Second.print();
    Second.printPlayer();

    Third.incrementGoalsScored();
    Third.print();
    Third.printPlayer();

    return 0;
}
