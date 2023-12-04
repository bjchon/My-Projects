//Bryant Chon
//Student ID:0550190
//Assignment 13
//Number header file
#include <iostream>
#include <string>
#include <exception>
#ifndef NUMBER
#define NUMBER

using namespace std;
using std::string;

using std::exception;

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
	void foo();
};

class NumberException : public exception
{
protected:
	int errorcode;
	string errormssg;

public:
	NumberException() : errormssg("Unknown"), errorcode(-1) {}
	NumberException(string s) : errormssg(s), errorcode(-1) {};
	NumberException(string s, int ec) : errormssg(s), errorcode(ec) {};
	string getMessage();
	int getCode();
};

#endif


