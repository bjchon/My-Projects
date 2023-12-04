//Bryant Chon
//Student ID:0550190
//Journal 7
//header file

#include <iostream>
#include <fstream>
#include <string>
#ifndef FRACTION
#define FRACTION
using namespace std;
using std::istream;
using std::ostream;

class Fraction
{
private:
	int *num;
	int *den;
	static int count;

public:
	void create();
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
	Fraction(const Fraction &f);
	~Fraction();
	//Operator Overloads
	Fraction operator + (const Fraction &f);
	Fraction operator - (const Fraction &f);
	Fraction operator * (const Fraction &f);
	Fraction operator / (const Fraction &f);
	Fraction &operator = (const Fraction &f);

	/*friend void setNumDen(Fraction &f);*/

	friend istream &operator >> (istream &input, Fraction &f);
	friend ostream &operator << (ostream &output, Fraction &f);

	static void printCount();

	// Get Fraction String
	string getFraction();

};


#endif