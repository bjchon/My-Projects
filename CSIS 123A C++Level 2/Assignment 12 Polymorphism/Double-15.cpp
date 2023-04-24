//Bryant Chon
//Student ID:0550190
//Assignment 12
//Double calculations

#include <iostream>
#include <string>
#include <sstream>
#include "Double.h"
#include <vector>
using namespace std;
using std::vector;

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
	stringstream ss;
	ss << d;
	this->assign(ss.str());
}

Double Double::add(const Double &d)
{
	Double tmp;
	tmp.equals(this->toDouble() + d.toDouble());
	return tmp;
}

Double Double::sub(const Double &d)
{
	Double tmp;
	tmp.equals(this->toDouble() - d.toDouble());
	return tmp;
}

Double Double::mul(const Double &d)
{
	Double tmp;
	tmp.equals(this->toDouble() * d.toDouble());
	return tmp;
}

Double Double::div(const Double &d)
{
	Double tmp;
	tmp.equals(this->toDouble() / d.toDouble());
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
	if (this->toDouble() == d)
		return true;
	else
		return false;
}

bool Double::operator==(const Double &d)
{
	if (this->toDouble() == d.toDouble())
		return true;
	else
		return false;
}

bool Double::operator!=(double d)
{
	if (this->toDouble() != d)
		return true;
	else
		return false;
}

bool Double::operator!=(const Double &d)
{
	if (this->toDouble() != d.toDouble())
		return true;
	else
		return false;
}

double Double::toDouble() const
{
	stringstream ss(this->c_str());
	double n;
	ss >> n;
	return n;
}

//

void Double::equals(string s)
{
	isNaN(s);
	Number *n;
	Double d;
	n = &d;
	if (n->isNaN())
	{
		this->assign("0");
		cout << s << " Cannot assign a non-number to class Double" << endl;
	}
	else
	{
		cout << s << " Valid Number Set" << endl;
		this->assign(s);
		//this->dub = stod(s);
		
	}
}

Double &Double::operator=(string s)
{
	this->equals(s);
	return *this;
}

Double::Double(string s)
{
	this->equals(s);

}

void Double::isNaN(string s)
{
	recursiveNaN(s);
	double num;
	string str;
	stringstream ss(s);

	if (ss >> num && !(ss >> str))
	{
		this->nan = false;
	}
	else
	{
		this->nan = true;
	}
}

void Double::recursiveNaN(string s)
{
	double num;
	int i = 0;
	string str;
	cout << s[i] << endl;
	stringstream ss(s);

	if (ss >> num && !(ss >> str))
	{
		if (s[i] > 0)
		{
			i++;
			recursiveNaN(s);
		}
		else
			cout << "Is a valid double" << endl;

	}

	else
	{
		if (s[i] != 0)
		{
			cout << "Not a number" << endl;
		}
		else
			return;
	}

}