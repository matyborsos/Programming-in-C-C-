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
 
    // Euclid's Algorithm
    if (a == b)
    {
        tmp_gcd = a;
    } 
    else if (a > b) 
    {
        return gcd(a-b, b);
    } 
    else return gcd(a, b - a);
 
    return tmp_gcd;
}
 
int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
 
}
 
// overloaded operator <<
std::ostream& operator<<(std::ostream &out, const Fraction &f) {
    out << f.num << "/" << f.den;
    return out;
}
 
// overloaded operator >>
std::istream& operator>>(std::istream& in, Fraction &f) {
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
 
Fraction FractionM::operator-(const Fraction& SndFrac) {
    return FractionM((*this).num * lcm((*this).den, SndFrac.den) / (*this).den -
                    SndFrac.num * lcm((*this).den, SndFrac.den) / SndFrac.den,
                    lcm((*this).den, SndFrac.den));
}
 
Fraction FractionP::operator+(const Fraction& SndFrac) {
    return FractionP((*this).num * lcm((*this).den, SndFrac.den) / (*this).den +
                    SndFrac.num * lcm((*this).den, SndFrac.den) / SndFrac.den,
                    lcm((*this).den, SndFrac.den));
}
 
Fraction& Fraction::operator=(const Fraction& New) {
    num = New.num;
    den = New.den;
    return *this;
}
 
bool Fraction::operator>(const Fraction& SndFrac) {
 
    if ((*this).num * SndFrac.den > (*this).den * SndFrac.num)
        return 1;
    else 
        return 0;
 
}
 
bool Fraction::operator<(const Fraction& SndFrac) {
 
    if ((*this).num * SndFrac.den < (*this).den * SndFrac.num)
        return 1;
    else 
        return 0;
 
}