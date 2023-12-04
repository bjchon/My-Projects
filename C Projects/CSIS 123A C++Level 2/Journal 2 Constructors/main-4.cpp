//Bryant Chon
//Student ID:0550190
//Journal 2
//main

#include <iostream>
#include "Fraction.h"
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s1;
	string s2;
	Fraction f1(1,4), f2(1,2), f3;

	f3 = f1.mul(f2);
	f3.setString();
	return 0;

}