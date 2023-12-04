//Bryant Chon
//Student ID:0550190
//Assignment 8
//Double header file
#include <string>
#ifndef DOUBLE
#define DOUBLE
#include "Integer.h"
using namespace std;

namespace Bryant
{
	class Double
	{
	private:
		double *dub;
		bool *nan;
		void isNaN(string s);

	public:
		void equals(double d);
		Double add(Double *d);
		Double sub(Double *d);
		Double mul(Double *d);
		Double div(Double *d);
		double toDouble() const;

		//Constructors
		Double();
		Double(Double *d);
		Double(double d);
		Double(Integer *i);
		~Double();

		//Operator Overloads
		Double operator + (Double *d);
		Double operator - (Double *d);
		Double operator * (Double *d);
		Double operator / (Double *d);
		Double &operator=(double d);
		Double &operator=(Double *d);
		bool operator==(double d);
		bool operator==(Double *d);
		bool operator!=(double d);
		bool operator!=(Double *d);

		//More Complex Types
		string toString();
		void equals(string s);
		Double &operator=(string s);
		Double(string s);
		bool isNaN();



	};

}

#endif