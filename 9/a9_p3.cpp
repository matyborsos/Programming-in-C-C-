/*  CH-230-A
    a9_p3.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>

using namespace std;

float my_abs( float n ) // function takes a float and returns a float value
{
    if( n < 0 )
        return -n; // if the number is negative it return a negative value
    else
        return n; // or the same number if it is positive or equal to 0
}

int main(int argc, char** argv)
{
    float n;
    cin >> n; // reads a real number
    cout << my_abs(n); // prints the absolute value of the real number
    return 0;
}
