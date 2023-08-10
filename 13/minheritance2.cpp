/* CH-230-A
   a13 p5.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
using namespace std;
 
class A
{
  int x;
  public:
    A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
  public:
    B():A(10) {  }
};
 
class C:  virtual public A 
{
  public:
    C():A(10) {  }
};
 
class D: public B, public C {
  public:
    D(): A(20), B(), C() {}
};
 
int main()
{
  // The error is in the following line
  D d;
  // The compiler said: error: use of deleted function 'D::D()'
  // and error: no matching function for call to 'A::A()'
  // Reason:
  // no default constructor exists for class "A" or "D"
  // detected during implicit generation of "D::D()" at line 32
  // As D doesn't have an explicit default constructor declared and defined
  // the compiler will automatically generate one for it which will 
  // call each of the default constructors of the parents on the hierarchy
  // Class A doesn't have a default constructor which gives the error when
  // generating an instance of D
  // A way to aolve this:
  // Define a public default constructor for class "D" using the parametric
  // constructor of class "A"
  d.print();
  return 0;
}
