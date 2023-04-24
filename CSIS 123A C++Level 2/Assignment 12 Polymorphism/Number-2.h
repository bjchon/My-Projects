//Bryant Chon
//Student ID:0550190
//Assignment 12
//Number header file
#include <iostream>
#include <string>
#ifndef NUMBER
#define NUMBER

using namespace std;

class Number : public string
{
protected:
	bool nan;
	virtual void isNaN(string s);
public:
	Number();
	Number(string n);
	virtual string toString();
	virtual bool isNaN();
	virtual void recursiveNaN(string s) = 0;
};

#endif
