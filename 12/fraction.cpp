#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}
 
Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
 
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}
 
int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;
 
    // Implement GCD of two numbers;
 
    return tmp_gcd;
}
 
int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
 
}
 
// overloaded operator <<
ostream& operator<<(ostream &out, const Fraction &f) {
    out << f.num << "/" << f.den;
    return out;
}

// overloaded operator >>
istream& operator>>(istream& in, Fraction &f) {
	char line;
	in >> f.num >> line >> f.den;
	if (f.den == 0 || line != '/') {
		cout << "Error!\n";
		cout << "The denominator will be changed 1.\n";
		f.den = 1;
	}
	return in; 
}

// overloaded operator *
Fraction operator*(const Fraction& FstFrac, const Fraction& SndFrac) {
    return Fraction(FstFrac.num * SndFrac.num, FstFrac.den * SndFrac.den);
}
 
// overloaded operator /
Fraction operator/(const Fraction& FstFrac, const Fraction& SndFrac) {
    return Fraction(FstFrac.num * SndFrac.den, FstFrac.den * SndFrac.num);
}
