//Bryant Chon
//Student ID:0550190
//Journal 3
//main

#include <iostream>
#include "Fraction.h"


using namespace std;

int main()
{
	Fraction f1(1, 4), f2(1, 2), f3;
	f3 = f1 / f2;
	f3.printFraction();
	return 0;

}