//Bryant Chon
//Student ID:0550190
//Journal 7
//main

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <string>
#include "Fraction.h"

using namespace std;
using std::string;
void writeFractions(int amount);
void readFractions();

int main()
{
	srand(time(0));
	writeFractions(10);
	readFractions();

	return 0;

}

void writeFractions(int amount)
{
	ofstream outfile("Fractions.txt");
	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	for (int i = 0; i < amount; i++)
	{
		Fraction *f = new Fraction(rand() % 100, rand() % 100);
		outfile << *f << endl;
	}
	outfile.close();
}

void readFractions()
{
	ifstream infile("Fractions.txt");
	char input[100];
	while (infile >> input)
		cout << input << endl;

	infile.close();
}