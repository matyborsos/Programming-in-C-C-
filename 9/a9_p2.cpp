/*  CH-230-A
    a9_p2.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    double x;
    string s;
    cin >> n >> x; // reads one integer and one double value
    cin >> s; // reads a string
    for( int i = 1; i <= n; i++ ) // repeats the printing n times
        cout << s << ':' << x << endl;
        // prints on the screen the string and the double value,
        // separated by ’:’, with a newline after the double value
    return 0;
}
