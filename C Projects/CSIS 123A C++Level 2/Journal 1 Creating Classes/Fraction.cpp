//Bryant Chon
//Student ID:0550190
//Journal 1
//calculations
#include <iostream>
#include "Fraction.h"

using namespace std;

void Fraction::setFraction(int n, int d)
{
	num = n;
	den = d;
}
Fraction Fraction::add(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.den) + (f.num * den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.den) - (f.num * den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::mul(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.num);
	tmp.den = (f.den * den);
	return tmp;
}
Fraction Fraction::div(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (f.den * num);
	tmp.den = (den * f.num);
	if (tmp.den > 0)
		return tmp;
	if(tmp.den < 0)
		tmp.num = (tmp.num * -1);
		tmp.den = (tmp.den * -1);
		return tmp;

	 
}
void Fraction::printFraction()
{
	cout << num << "/" << den << endl;
}