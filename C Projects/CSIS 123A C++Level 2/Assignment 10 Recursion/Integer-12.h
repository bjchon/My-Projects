//Bryant Chon
//Student ID:0550190
//Assignment 10
//Integer header file

#include <string>
#ifndef INTEGER
#define INTEGER
using namespace std;

class Integer
{
private:
	int inte;
	bool nan;
	void isNaN(string s);
	void recursiveNaN(string s, int i);

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
	string toString();
	void equals(string s);
	Integer &operator=(string s);
	Integer(string s);
	bool isNaN();
};

#endif