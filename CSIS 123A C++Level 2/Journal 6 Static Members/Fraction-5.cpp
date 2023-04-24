//Bryant Chon
//Student ID:0550190
//Journal 6
//calculations
#include <iostream>
#include "Fraction.h"


using namespace std;

int Fraction::count = 0;

void Fraction::printCount()
{
	cout << "There are " << Fraction::count << " Instances" << endl;
}

Fraction::Fraction()

{
	this->create();
	this->setFraction(1, 1);

}

Fraction::Fraction(int num, int den)
{
	this->create();
	this->setFraction(num, den);

}

void Fraction::create()
{
	this->num = new int;
	this->den = new int;
}

Fraction::~Fraction()
{
	delete num;
	delete den;
	Fraction::count--;
}
Fraction::Fraction(const Fraction &f)
{
	this->create();
	this->setFraction(f.getNum(), f.getDen());
}

void Fraction::setFraction(int n, int d)
{
	*this->num = n;
	*this->den = d;
	Fraction::count++;
}

Fraction Fraction::add(const Fraction &f)
{
	Fraction tmp;
	*tmp.num = (*this->num * *f.den) + (*f.num * *this->den);
	*tmp.den = *f.den * *this->den;
	return tmp;
}

Fraction Fraction::sub(const Fraction &f)
{
	Fraction tmp;
	*tmp.num = (*this->num * *f.den) - (*f.num * *den);
	*tmp.den = *f.den * *this->den;
	return tmp;
}

Fraction Fraction::mul(const Fraction &f)
{
	Fraction tmp;
	*tmp.num = *this->num * *f.num;
	*tmp.den = *this->den * *f.den;
	return tmp;
}

Fraction Fraction::div(const Fraction &f)
{
	Fraction tmp;
	*tmp.num = *f.den * *this->num;
	*tmp.den = *this->den * *f.num;
	if (*tmp.den > 0)
		return tmp;
	if (tmp.den < 0)
	{
		*tmp.num *= -1;
		*tmp.den *= -1;
	}
	return tmp;
}

void Fraction::printFraction()
{
	cout << num << "/" << den << endl;
}

int Fraction::getDen() const
{
	return *this->den;
}

int Fraction::getNum() const
{
	return *this->num;
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

istream &operator >> (istream &input, Fraction &f)
{
	cout << "Enter a numerator" << endl;
	input >> *f.num;
	cout << "Enter a denominator" << endl;
	input >> *f.den;
	return input;
}

ostream &operator << (ostream &output, Fraction &f)
{
	output << "Numerator: " << f.getNum() << endl;
	output << "Denominator: " << f.getDen() << endl;
	output << "Equals: " << f.getNum() << "/" << f.getDen() << endl;
	return output;
}