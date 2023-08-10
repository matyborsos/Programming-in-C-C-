/* CH-230-A
   a13 p4.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
// making the inheritance virtual
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
// making the inheritance virtual
class C:  public virtual A
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    // The error is in the following line
    d.print();
    // The compiler said: error: request for member 'print' is ambiguous
    // Reason:
    // Multiple inheritance from class B and C creates ambiguity for the methods
    // inherited from the both of them
    // Calling the print() method which was originally inherited from class A
    // will create an ambiguity where the compiler won't know which
    // inherited print(), from B or C, to call, therefore making it ambiguous
    // A way to solve this:
    // Both classes B and C should virtually inherit the methods
    // and data members of class A, so that only one of the
    // methods gets inherited and no duplicates occur
    return 0;
}
