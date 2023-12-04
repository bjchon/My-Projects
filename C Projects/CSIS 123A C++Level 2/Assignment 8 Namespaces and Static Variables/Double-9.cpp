//Bryant Chon
//Student ID:0550190
//Assignment 8
//Double calculations

#include <iostream>
#include <string>
#include <sstream>
#include "Double.h"
#include <vector>


using namespace std;
using std::vector;

namespace Bryant
{

	Double::Double()
	{
		this->equals(0.0);
	}

	Double::Double(Double *d)
	{
		this->equals(d->toDouble());
	}

	Double::Double(double d)
	{
		this->equals(d);
	}

	Double::Double(Integer *i)
	{
		this->equals(i->toInt());
	}

	void Double::equals(double d)
	{
		this->dub = new double;
		*dub = d;
	}

	Double::~Double()
	{
		delete dub;
	}

	Double Double::add(Double *d)
	{
		Double *tmp = new Double();
		tmp->equals(*dub + d->toDouble());
		return *tmp;
	}

	Double Double::sub(Double *d)
	{
		Double tmp;
		tmp.equals(*dub - d->toDouble());
		return tmp;
	}

	Double Double::mul(Double *d)
	{
		Double *tmp = 0;
		tmp->equals(*dub * d->toDouble());
		return tmp;
	}

	Double Double::div(Double *d)
	{
		Double *tmp = 0;
		tmp->equals(*dub / d->toDouble());
		return tmp;
	}


	Double Double::operator+(Double *d)
	{
		return this->add(d);
	}

	Double Double::operator - (Double *d)
	{
		return this->sub(d);
	}

	Double Double::operator * (Double *d)
	{
		return this->mul(d);
	}

	Double Double::operator / (Double *d)
	{
		return this->div(d);
	}

	Double &Double::operator=(double d)
	{
		this->equals(d);
		return *this;
	}

	Double &Double::operator=(Double *d)
	{
		this->equals(d->toDouble());
		return *this;
	}

	bool Double::operator==(double d)
	{
		if (*dub == d)
			return true;
		else
			return false;
	}

	bool Double::operator==(Double *d)
	{
		if (*dub == d->toDouble())
			return true;
		else
			return false;
	}

	bool Double::operator!=(double d)
	{
		if (*dub != d)
			return true;
		else
			return false;
	}

	bool Double::operator!=(Double *d)
	{
		if (*dub != d->toDouble())
			return true;
		else
			return false;
	}

	double Double::toDouble() const
	{
		return *dub;
	}

	string Double::toString()
	{
		stringstream ss;
		ss << *dub;
		string stri = ss.str();
		return stri;
	}

	void Double::equals(string s)
	{
		isNaN(s);
		if (this->isNaN())
		{
			*this->dub = 0;
			cout << s << " Cannot assign a non-number to class Double" << endl;
		}
		else
		{
			cout << s << " Valid Number Set" << endl;
			*this->dub = stod(s);
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
		double num;
		string str;
		stringstream ss(s);

		if (ss >> num && !(ss >> str))
		{
			*this->nan = false;
		}
		else
		{
			*this->nan = true;
		}
	}

	bool Double::isNaN()
	{
		return *this->nan;
	}
}