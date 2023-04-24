//Bryant Chon
//Student ID:0550190
//Journal 6
//main

#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1, f2;
	Fraction *f3 = new Fraction();
	cin >> f1 >> f2;
	*f3 = f1 + f2;
	cout << *f3 << endl;
	Fraction::printCount();
	delete f3;
	Fraction::printCount();




	return 0;

}