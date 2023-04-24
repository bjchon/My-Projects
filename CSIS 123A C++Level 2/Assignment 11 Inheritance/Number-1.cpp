//Bryant Chon
//Student ID:0550190
//Assignment 11
//Number CPP file

#include <iostream>
#include <string>
#include "Number.h"

using namespace std;

Number::Number()
{
	this->assign("0"); 
}

Number::Number(string n)
{
	this->assign(n);
}

