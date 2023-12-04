//Bryant Chon
//Student ID:0550190
//Journal 10
//Calc CPP File

#include <iostream>
#include "calc.h"

using namespace std;

int main()
{
	Calc<double> c(6.6, 0);
	try
	{
		double d = c.div();
		cout << d << endl;
	}
	catch (calcException m)
	{
		cout << m.what() << endl;
	}
	
}