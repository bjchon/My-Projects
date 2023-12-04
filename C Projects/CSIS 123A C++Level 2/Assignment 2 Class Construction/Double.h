//Bryant Chon
//Student ID:0550190
//Assignment 2
//Double header file

#ifndef DOUBLE
#define DOUBLE

class Double
{
private:
	double dub;
public:
	void dubequals(double dou);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	double toDouble();
};

#endif