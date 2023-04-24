//Bryant Chon
//Student ID:0550190
//Journal 4
//header file

#include <iostream>
#ifndef FRACTION
#define FRACTION

using std::istream;
using std::ostream;

class Fraction
{
private:
	int num;
	int den;

public:
	void setFraction(int n, int d);
	Fraction add(const Fraction &f);
	Fraction sub(const Fraction &f);
	Fraction mul(const Fraction &f);
	Fraction div(const Fraction &f);
	int getNum() const;
	int getDen() const;
	void printFraction();

	//Constructors
	Fraction();
	Fraction(int num, int den);

	//Operator Overloads
	Fraction operator + (const Fraction &f);
	Fraction operator - (const Fraction &f);
	Fraction operator * (const Fraction &f);
	Fraction operator / (const Fraction &f);
	Fraction &operator = (const Fraction &f);

	/*friend void setNumDen(Fraction &f);*/

	friend istream &operator >> (istream &input, Fraction &f);
	friend ostream &operator << (ostream &output, Fraction &f);

};


#endif