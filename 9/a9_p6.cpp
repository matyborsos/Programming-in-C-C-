/*  CH-230-A
    a9_p6.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;


int myfirst( int a[] ) // function takes an array of integers
                       // and returns an integer
{
    for( int i=0; i < 5; i++ )
        if( a[i] % 2 == 0 && a[i] > 0 )
            // checks is the int value is positive
            // and it is even
            return a[i];
    return -1; // if there are no such values in the array of integers
}

double myfirst( double b[] ) // function takes a array of doubles
                          // and returns a double value
{
    for( int i=0; i < 5; i++ )
        if( b[i] == (int) b[i] && b[i] < 0 )
            // checks is the double value is negative
            // and does not have a fractional part
            return b[i];
    return -1.1; // if there are no such values in the array of doubles
}

char myfirst( char c[] ) // function takes a array of characters
                         //and returns a character
{
    for( int i = 0; i <= 7; i++)
        // checks if the character is a letter of alphabet first
        if (isalpha(c[i]))
            if( strchr("aeiouAEIOU", c[i]) == 0 )
                // then if is not a vowel, using the strchr function
                return c[i];
    return '0'; // if there are no consonants
}

int main(int argc, char** argv)
{
    int ints[] = {-2, -4, 6, 45, 80};
    double doubles[] = { 1.2, -2, 34, -23.556, 23.2};
    char chars[] = {'A', 'I', 'o', 'b', 'y', 's', 'H'};

    // calls myfirst() with an array of integers
    cout << myfirst(ints) << endl;

    // calls myfirst() with an array of doubles
    cout << myfirst(doubles) << endl;

    // calls myfirst() with an array of characters
    cout << myfirst(chars) << endl;

    return 0;
}
