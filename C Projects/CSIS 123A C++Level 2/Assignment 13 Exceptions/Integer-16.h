//Bryant Chon
//Student ID:0550190
//Assignment 13
//Integer header file
#include <iostream>
#include "Number.h"
#include <string>
#include <vector>
#include <conio.h>

#ifndef INTEGER
#define INTEGER
using namespace std;
using std::vector;
using std::string;

class Integer : public Number
{
private:
	void isNaN(string s);
	vector<int>iNumbers;
	vector<int>::iterator i;
	vector<double>dNumbers;
	vector<double>::iterator j;
	void recursiveNaN(string s);


public:
	void equals(int i);
	Integer add(const Integer &i);
	Integer sub(const Integer &i);
	Integer mul(const Integer &i);
	Integer div(const Integer &i);
	int toInt() const;

	//Constructors
	Integer();
	Integer(int i);
	Integer(const Integer &i);

	//Operator Overloads
	Integer operator + (const Integer &i);
	Integer operator - (const Integer &i);
	Integer operator * (const Integer &i);
	Integer operator / (const Integer &i);
	Integer &operator=(int i);
	Integer &operator=(const Integer &i);
	bool operator==(int i);
	bool operator==(const Integer &i);
	bool operator!=(int i);
	bool operator!=(const Integer &i);

	//More Complex Types
	void equals(string s);
	Integer &operator=(string s);
	Integer(string s);

	void writeNumbers(int amount);

};
#endif