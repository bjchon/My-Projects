//Bryant Chon
//Student ID:0550190
//Journal 1
//header file
#ifndef FRACTION
#define FRACTION

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
};


#endif
