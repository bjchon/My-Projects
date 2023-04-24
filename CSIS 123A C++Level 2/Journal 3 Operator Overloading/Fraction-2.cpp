//Bryant Chon
//Student ID:0550190
//Journal 3
//calculations
#include <iostream>
#include "Fraction.h"


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
	this->num = n;
	this->den = d;
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

void Fraction::printFraction()
{
	cout << num << "/" << den << endl;
}
int Fraction::getDen() const
{
	return this->den;
}
int Fraction::getNum() const
{
	return this->num;
}
Fraction Fraction::operator+(const Fraction &f)
{
	return this->add(f);
}

Fraction Fraction::operator-(const Fraction &f)
{
	return this->sub(f);
}
Fraction Fraction::operator*(const Fraction &f)
{
	return this->mul(f);
}
Fraction Fraction::operator/(const Fraction &f)
{
	return this->div(f);
}
Fraction &Fraction::operator=(const Fraction &f)
{
	this->setFraction(f.getNum(), f.getDen());
	return *this;
}