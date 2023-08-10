/*  CH-230-A
    a9_p5.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (int argc, char** argv) {

    int n, tries = 0, randomNumber;
    string PlayerName;

    cout << "Player Name? ";
    cin >> PlayerName;

    // random number generator
    srand ( static_cast < unsigned int >(time(0)));
    randomNumber = rand () % 100 + 1; // gets a number from 1 to 100

    cout << "Pick a number between 1 and 100: ";
    cin >> n;
    tries++;

    while( n != randomNumber )
        // loop that continues until the number is guessed
    {
        if( n < randomNumber )
            cout << "Too low!\n";
        else
            cout << "Too high!\n";

        // if the guessed number is not correct
        // another number/guess will be read
        cout << "Pick another number between 1 and 100: ";
        cin >> n;
        tries++;

    }

    // if the number is guessed this output will be printed
    cout << "Congratulations " << PlayerName << "! ";
    if ( tries == 1 )
        cout << "You guessed the number in " << tries << " guess!";
    else
        cout << "You guessed the number in " << tries << " guesses!";

    return 0;
}
