//Bryant Chon
//Student ID:0550190
//Assignment 3
//main

#include <iostream>
#include "Integer.h"
#include "Double.h"

using namespace std;

int main()
{
	Double d(12.5), d3;
	Integer i(10), i3;
	d3 = d.add(1.5);
	i3 = i.add(5);
	cout << d3.toDouble() << endl;
	cout << i3.toInt() << endl;

	return 0;
}