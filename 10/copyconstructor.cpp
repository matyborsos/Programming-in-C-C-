/* CH-230-A
   a10 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/


#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	~NaiveString();
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "The normal constructor has been called!" << endl;
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
	cout << "The copy constructor has been called!" << endl;
}

NaiveString::~NaiveString() {
	cout << "Destructor has been called!" << endl;
	delete [] str;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

// different than funcByVal() in the sense that
// the changes this function makes can be seen outside the function
void funcByRef(NaiveString& s) {
	cout << "funcbyref() being called" << endl;
	s.update('B', 'A');
	s.print();
}

int main(int argc, char** argv)
{
    // first instance called with a normal constructor
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	cout << "After funcbyval():" << endl;
	a.print(); // funcbyval() should have not affected the original string

	// second instance called with a copy constructor
	NaiveString b(a);
	b.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(b);
	cout << "After funcbyref():" << endl;
	b.print(); // the changes made inside funbyraf() should also be visible he
}
