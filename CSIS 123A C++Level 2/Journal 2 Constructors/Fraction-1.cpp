//Bryant Chon
//Student ID:0550190
//Journal 2
//calculations
#include <iostream>
#include "Fraction.h"
#include <sstream>

using namespace std;

Fraction::Fraction()

{
	this->setFraction(1, 1);

}
Fraction::Fraction(int num, int den)
{
	this->setFraction(num, den);
}

void Fraction::setFraction(int n, int d)
{
	num = n;
	den = d;
}
Fraction Fraction::add(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) + (f.num * this->den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) - (f.num * den);
	tmp.den = f.den * this->den;
	return tmp;
}
Fraction Fraction::mul(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (this->num * f.num);
	tmp.den = (f.den * this->den);
	return tmp;
}
Fraction Fraction::div(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (f.den * this->num);
	tmp.den = (this->den * f.num);
	if (tmp.den > 0)
		return tmp;
	if (tmp.den < 0)
		tmp.num = (tmp.num * -1);
	tmp.den = (tmp.den * -1);
	return tmp;


}

void Fraction::setString()
{
	stringstream ss, s;
	ss << num;
	string s1 = ss.str();
	s << den;
	string s2 = s.str();
	printString(s1, s2);
}

void Fraction::printString(string s1, string s2)
{
	cout << s1 << " " << s2;
}