//Bryant Chon
//Student ID:0550190
//Journal 2
//header file
#ifndef FRACTION
#define FRACTION
#include <string>
using std::string;
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
	void printFraction();

	//Constructors
	Fraction();
	Fraction(int num, int den);
	void setString();
	void printString(string s1, string s2);

};


#endif
