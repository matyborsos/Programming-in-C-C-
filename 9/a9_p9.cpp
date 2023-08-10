/*  CH-230-A
    a9_p9.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

void replaced_word( string p )
{
    for (int i = 0; i < (int) p.length(); i++)
         if( strchr("aeiouAEIOU", p[i]) == 0 )
            // checks if the character on position i
            // in the string p is not vowel
            cout << p[i];
            // if it is not, the function prints it
         else
            cout << '_';
            // if it is, the function an underscore
    cout << endl;
}

int main (int argc, char** argv)
{
    int i, tries, random;
    string guess;
    char answer[10] = "yes";
    string p[17] = {"computer","television","keyboard","laptop","mouse"};
    // initializing the array of words with the mandatory given words

    cout << "Welcome to the game!\nEnter 12 words:\n";
    // Input the remaining words for the word guess game
    for (i = 5; i < 17; i++)
        getline(cin, p[i]);

    while( strcmp(answer, "quit") != 0 ){
        // random number generator
        srand(static_cast < unsigned int >(time(0)));
        random = rand () % 17; // gets a number from 1 to 16

        string temp = p[random]; // stores the word on the random position

        cout << "Word to guess: " << endl;
        replaced_word(temp); // applies the replacing function to the word

        cout << "Your guess of the word: ";
        cin >> guess;
        tries = 1; // initializing tries with 1 as the game started
        while (guess != p[random])  // Infinite loop to guess the word

            if (guess != p[random]) {
                cout << "Try again!\n";
            cout << "Your guess of the word: ";
            cin >> guess;
            tries++; // increments the number of tries
            }

        // if the word was guessed, it prints this output
        cout << "Number of tries: " << tries << endl;
        cout << "Would you like to play again? Type 'quit' if no!\n";
        cin >> answer;
    }
    return 0;
}
