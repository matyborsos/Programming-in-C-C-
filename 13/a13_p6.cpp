/* CH-230-A
   a13 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector(20);

    // The program assigns the value 8 to all 20 elements of the vector
    for ( int i = 0; i < 20; i++ )
        vector[i] = 8; 
    
    // The program then tries to access the 21th element,
    // which is at position 20
    try 
    {
        vector.at(20); 
    }

    // And then it catches the out_of_range error 
    // when trying to access invalid index
    catch (out_of_range& error) {
        cerr << error.what() << endl;
    }

    return 0;
}