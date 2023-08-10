/*  CH-230-A
    a9_p7.cpp
    Matheas Roland Borsos
    mborsos@jacobs-university.de
*/

#include <iostream>

using namespace std;

// swapping takes 2 integers and swaps their values
void swapping(int &a, int &b)
{
    int temp1;
    temp1 = a;
    a = b;
    b = temp1;
} // swap ints

// swapping takes 2 floats and swaps their values
void swapping(float &x, float &y)
{
    float temp2;
    temp2 = x;
    x = y;
    y = temp2;
} // swap floats

// swapping takes 2 const char pointers and swaps their values
void swapping(const char *&str1, const char *&str2)
{
    const char *str3;
    str3 = str1;
    str1 = str2;
    str2 = str3;
} // swap const char pointers

int main(void) {

    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}
