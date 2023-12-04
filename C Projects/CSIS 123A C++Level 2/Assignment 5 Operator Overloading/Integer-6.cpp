//Bryant Chon
//Student ID:0550190
//Assignment 5
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

Integer Integer::operator + (const Integer &i)
{
	return this->add(i);
}

Integer Integer::operator - (const Integer &i)
{
	return this->sub(i);
}

Integer Integer::operator * (const Integer &i)
{
	return this->mul(i);
}

Integer Integer::operator / (const Integer &i)
{
	return this->div(i);
}

Integer &Integer::operator=(int i)
{
	this->equals(i);
	return *this;
}

Integer &Integer::operator=(const Integer &i)
{
	this->equals(i.toInt());
	return *this;
}

bool Integer::operator==(int i)
{
	if (inte == i)
		return true;
	else
		return false;
}

bool Integer::operator==(const Integer &i)
{
	if (inte == i.toInt())
		return true;
	else
		return false;
}

bool Integer::operator!=(int i)
{
	if (inte != i)
		return true;
	else
		return false;
}

bool Integer::operator!=(const Integer &i)
{
	if (inte != i.toInt())
		return true;
	else
		return false;
}

int Integer::toInt() const
{
	return inte;
}