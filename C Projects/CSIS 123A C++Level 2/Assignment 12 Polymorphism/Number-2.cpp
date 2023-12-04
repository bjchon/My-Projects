//Bryant Chon
//Student ID:0550190
//Assignment 12
//Number CPP file

#include <iostream>
#include <string>
#include "Number.h"

using namespace std;
using std::string;

Number::Number()
{
	this->assign("0"); 
}

Number::Number(string n)
{
	this->assign(n);
}

string Number::toString()
{
	string s = this->c_str();
	return s;
}

bool Number::isNaN()
{
	cout << "Test" << endl;
	return this->nan;
}

void Number::isNaN(string s)
{
	recursiveNaN(s);
}