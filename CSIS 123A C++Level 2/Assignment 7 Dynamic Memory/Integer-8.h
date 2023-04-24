//Bryant Chon
//Student ID:0550190
//Assignment 7
//Integer header file
#include <string>
#ifndef INTEGER
#define INTEGER
using namespace std;

class Integer
{
private:
	int *inte;
	bool *nan;
	void isNaN(string s);

public:
	void equals(int i);
	Integer add(Integer *i);
	Integer sub(Integer *i);
	Integer mul(Integer *i);
	Integer div(Integer *i);
	int toInt() const;

	//Constructors
	Integer();
	Integer(int i);
	Integer(Integer *i);
	~Integer();

	//Operator Overloads
	Integer operator + (Integer *i);
	Integer operator - (Integer *i);
	Integer operator * (Integer *i);
	Integer operator / (Integer *i);
	Integer &operator=(int i);
	Integer &operator=(Integer *i);
	bool operator==(int i);
	bool operator==(Integer *i);
	bool operator!=(int i);
	bool operator!=(Integer *i);

	//More Complex Types
	string toString();
	void equals(string s);
	Integer &operator=(string s);
	Integer(string s);
	bool isNaN();
};

#endif