//Bryant Chon
//Student ID:0550190
//Assignment 11
//main

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <fstream>
#include "Integer.h"
#include "Double.h"
#include "Number.h"

using namespace std;

void readNumbers();

int main()
{
	Double d = 5;
	cout << d.toDouble() << endl;
	
	
	return 0;
}

void readNumbers()
{

	ifstream infile("FileIO.txt");
	char input[100];
	Integer *i = new Integer();
	Double *d = new Double();
	while(infile.getline(input, 100))
		i->equals(input);
	i->writeNumbers(100);


	infile.close();
}

