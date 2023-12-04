//Bryant Chon
//Student ID:0550190
//Assignment 13
//Double header file
#include <iostream>
#include <string>
#ifndef DOUBLE
#define DOUBLE
#include "Integer.h"
#include "Number.h"
using namespace std;

class Double : public Number
{
private:
	void isNaN(string s);
	void recursiveNaN(string s);

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

	//Operator Overloads
	Double operator + (const Double &d);
	Double operator - (const Double &d);
	Double operator * (const Double &d);
	Double operator / (const Double &d);
	Double &operator=(double d);
	Double &operator=(const Double &d);
	bool operator==(double d);
	bool operator==(const Double &d);
	bool operator!=(double d);
	bool operator!=(const Double &d);

	//More Complex Types
	/*string toString();*/
	void equals(string s);
	Double &operator=(string s);
	Double(string s);
	

};

#endif