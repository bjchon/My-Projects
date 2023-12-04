//Bryant Chon
//Student ID:0550190
//Assignment 5
//Double calculations

#include <iostream>
#include "Double.h"

using namespace std;

Double::Double()
{
	this->equals(0.0);
}

Double::Double(const Double &d)
{
	this->equals(d.toDouble());
}

Double::Double(double d)
{
	this->equals(d);
}

Double::Double(Integer i)
{
	this->equals(i.toInt());
}

void Double::equals(double d)
{
	dub = d;
}

Double Double::add(const Double &d)
{
	Double tmp;
	tmp.equals(dub + d.toDouble());
	return tmp;
}

Double Double::sub(const Double &d)
{
	Double tmp;
	tmp.equals(dub - d.toDouble());
	return tmp;
}

Double Double::mul(const Double &d)
{
	Double tmp;
	tmp.equals(dub * d.toDouble());
	return tmp;
}

Double Double::div(const Double &d)
{
	Double tmp;
	tmp.equals(dub / d.toDouble());
	return tmp;
}


Double Double::operator+(const Double &d)
{
	return this->add(d);
}

Double Double::operator - (const Double &d)
{
	return this->sub(d);
}

Double Double::operator * (const Double &d)
{
	return this->mul(d);
}

Double Double::operator / (const Double &d)
{
	return this->div(d);
}

Double &Double::operator=(double d)
{
	this->equals(d);
	return *this;
}

Double &Double::operator=(const Double &d)
{
	this->equals(d.toDouble());
	return *this;
}

bool Double::operator==(double d)
{
	if (dub == d)
		return true;
	else
		return false;
}

bool Double::operator==(const Double &d)
{
	if (dub == d.toDouble())
		return true;
	else
		return false;
}

bool Double::operator!=(double d)
{
	if (dub != d)
		return true;
	else
		return false;
}

bool Double::operator!=(const Double &d)
{
	if (dub != d.toDouble())
		return true;
	else
		return false;
}

double Double::toDouble() const
{
	return dub;
}
