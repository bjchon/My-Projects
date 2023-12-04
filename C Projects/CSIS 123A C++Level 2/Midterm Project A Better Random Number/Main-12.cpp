//Bryant Chon
//Student ID:0550190
//MidTerm
//main

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include "Integer.h"
#include "Double.h"
#include "Random.h"

using namespace std;
using namespace Bryant;
using std::vector;

int main()
{	
	Random r;
	Double s = 1.0;
	Double t = 5.0;
	r.setRange(s, t);
	int num = 250;

	for (int i = 0; i < num; i++)
	{
		cout << r.nextInt() << endl;
		cout << r.nextDbl() << endl;
		cout << r.nextDouble().toDouble() << endl;
		cout << r.nextInteger().toInt() << endl << endl;
	}

	return 0;
}



