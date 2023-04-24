//Bryant Chon
//Student ID:0550190
//Assignment 4
//Double header file

#ifndef DOUBLE
#define DOUBLE
#include "Integer.h"

class Double
{
private:
	double dub;

public:
	void equals(double d);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	double toDouble() const;
	//Constructors
	Double();
	Double(const Double &d);
	Double(double d);
	Double(Integer i);

};

#endif