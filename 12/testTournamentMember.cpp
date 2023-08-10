#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

int main(int argc, char** argv) {

    const char FirstName[36] = "Paul";
    char LastName[37] = "Enderson";
    char Date[11] = "1984-10-02";

    string location = "London";
    string changedLocation = "Berlin";
    string role = "Player";
    bool present = false;


    // empty constructor test
    TournamentMember First;
    First.print();

    // parametric constructor and changeLocation() test
    TournamentMember Second(FirstName, LastName, Date, 
                                    location, role, present);
    Second.print();
    Second.changeLocation(changedLocation);
    Second.print();

    // copy constructor test
    TournamentMember Third(Second);
    Third.print();

    return 0;
}