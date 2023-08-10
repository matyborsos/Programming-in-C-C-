/*  CH-230-A
    a9_p4.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;

int mycount( int a, int b )
{
    return b - a;
    // returns the difference
    // between the second and first parameter (in this order)
}

int mycount( char s1, string s2 )
{
    int cnt = 0; // counter for the occurrences of s1 in s2
    for( int i = 0; i <= (int) s2.length(); i++)
        // loops trough all the characters in the string
        if( s2[i] == s1 )
            cnt++; // counts the ones equal with s1
    return cnt; // returns the number of occurrences of s1 in s2
}

int main(int argc, char** argv)
{
    int a = 7,b = 3;

    // calls the overloaded function with int parameters
    cout << mycount(a,b) << endl; // should prints -4

    // calls the overloaded function with char and string parameters
    cout << mycount('i', "this is a string") << endl; // should print 3

    return 0;
}
