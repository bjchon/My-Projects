//Bryant Chon
//Student ID:0550190
//Assignment 2
//main

#include <iostream>
#include "Integer.h"
#include "Double.h"

using namespace std;

int main()
{
	
	Double d1, d2, d3;
	Integer i1, i2, i3;
	d1.dubequals(12.34);
	d2.dubequals(5.6);
	i1.intequals(20);
	i2.intequals(5);
	d3 = d1.mul(d2);
	i3 = i1.intdiv(i2);
	cout << d3.toDouble() << endl;
	cout << i3.toInt() << endl;

	return 0;
}