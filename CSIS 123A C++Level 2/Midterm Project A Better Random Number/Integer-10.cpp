//Bryant Chon
//Student ID:0550190
//MidTerm
//Integer calculations

#include <iostream>
#include "Integer.h"

using namespace std;

Integer::Integer()
{
	this->equals(0);
}

Integer::Integer(const Integer &i)
{
	this->equals(i.toInt());
}

Integer::Integer(int i)
{
	this->equals(i);
}

void Integer::equals(int i)
{
	inte = i;
}

Integer Integer::add(const Integer &i)
{
	Integer tmp;
	tmp.equals(inte + i.toInt());
	return tmp;
}

Integer Integer::sub(const Integer &i)
{
	//Integer tmp;
	//tmp.equals(this->toInt() - i);
	//return tmp;
	Integer tmp;
	tmp.equals(inte - i.toInt());
	return tmp;
}

Integer Integer::mul(const Integer &i)
{
	Integer tmp;
	tmp.equals(inte * i.toInt());
	return tmp;
}

Integer Integer::div(const Integer &i)
{
	Integer tmp;
	tmp.equals(inte / i.toInt());
	return tmp;
}

int Integer::toInt() const
{
	return inte;
}