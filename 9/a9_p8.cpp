/*  CH-230-A
    a9_p8.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>

using namespace std;

void subtract_max( int *a, int n)
{
    int i;
    int maxi = a[0];
    // gives maxi the value of the first element in the array,

    // traverses the array and finds the biggest integer
    for( i = 1; i < n; i++)
        if( a[i] > maxi )
            maxi = a[i];

    // traverses the array again and subtracts the biggest integer
    // from all the elements of the array
    for( i = 0; i < n; i++)
        a[i] = a[i] - maxi;
}

void deallocate( int *a )
{
    delete [] a;
}

int main (int argc, char** argv)
{
    int i, n;
    int *a;
    cin >> n;
    // dynamically allocating the array a
    a = new int[n];

    // reading the elements of the array
    for (i = 0; i < n; i++)
            cin >> a[i];

    // prints the values of the array before calling the function
    cout << "Before calling the function: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;


    // applying the function
    subtract_max( a, n );

    // printing the elements after the subtraction
    cout << "After calling the function: ";
    for (i = 0; i < n; i++)
        cout << a[i]<< " ";
    cout<< endl;

    // deallocates the dynamically allocated memory of the array
    deallocate( a );

    return 0;
}
