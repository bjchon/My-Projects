//Bryant Chon
//Student ID:0550190
//Assignment 8
//Integer calculations

#include <iostream>
#include "Integer.h"
#include <string>
#include <sstream>
#include <vector>



using namespace std;
using std::vector;

namespace Bryant
{


	Integer::Integer()
	{
		this->equals(0);
	}

	Integer::Integer(Integer *i)
	{
		this->equals(i->toInt());
	}

	Integer::Integer(int i)
	{
		this->equals(i);
	}

	void Integer::equals(int i)
	{
		this->inte = new int;
		*inte = i;
	}

	Integer::~Integer()
	{
		delete inte;
	}

	Integer Integer::add(Integer *i)
	{
		Integer *tmp = new Integer();
		tmp->equals(*inte + i->toInt());
		return tmp;
	}

	Integer Integer::sub(Integer *i)
	{
		Integer *tmp = new Integer();
		tmp->equals(*inte - i->toInt());
		return tmp;
	}

	Integer Integer::mul(Integer *i)
	{
		Integer *tmp = new Integer();
		tmp->equals(*inte * i->toInt());
		return tmp;
	}

	Integer Integer::div(Integer *i)
	{
		Integer *tmp = new Integer();
		tmp->equals(*inte / i->toInt());
		return tmp;
	}

	Integer Integer::operator + (Integer *i)
	{
		return this->add(i);
	}

	Integer Integer::operator - (Integer *i)
	{
		return this->sub(i);
	}

	Integer Integer::operator * (Integer *i)
	{
		return this->mul(i);
	}

	Integer Integer::operator / (Integer *i)
	{
		return this->div(i);
	}

	Integer &Integer::operator=(int i)
	{
		this->equals(i);
		return *this;
	}

	Integer &Integer::operator=(Integer *i)
	{
		this->equals(i->toInt());
		return *this;
	}

	bool Integer::operator==(int i)
	{
		if (*inte == i)
			return true;
		else
			return false;
	}

	bool Integer::operator==(Integer *i)
	{
		if (*inte == i->toInt())
			return true;
		else
			return false;
	}

	bool Integer::operator!=(int i)
	{
		if (*inte != i)
			return true;
		else
			return false;
	}

	bool Integer::operator!=(Integer *i)
	{
		if (*inte != i->toInt())
			return true;
		else
			return false;
	}

	int Integer::toInt() const
	{
		return *inte;
	}

	string Integer::toString()
	{
		stringstream ss;
		ss << *inte;
		string stri = ss.str();
		return stri;
	}

	void Integer::equals(string s)
	{
		isNaN(s);
		if (this->isNaN())
		{
			*this->inte = 0;
			cout << s << " Cannot assign a non-number to class Integer" << endl;
		}
		else
		{
			cout << s << " Valid Number Set" << endl;
			*this->inte = stoi(s);
		}
	}

	Integer &Integer::operator=(string s)
	{
		this->equals(s);
		return *this;
	}

	Integer::Integer(string s)
	{
		this->equals(s);
	}

	void Integer::isNaN(string s)
	{
		int num;
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

	bool Integer::isNaN()
	{
		return this->nan;
	}
}