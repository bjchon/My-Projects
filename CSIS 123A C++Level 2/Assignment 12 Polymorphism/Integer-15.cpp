//Bryant Chon
//Student ID:0550190
//Assignment 12
//Integer calculations

#include <iostream>
#include "Double.h"
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <conio.h>
#include <fstream>

using namespace std;

using namespace std;
using std::vector;

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
	stringstream ss;
	ss << i;
	this->assign(ss.str());
}

Integer Integer::add(const Integer &i)
{
	Integer tmp;
	tmp.equals(this->toInt() + i.toInt());
	return tmp;
}

Integer Integer::sub(const Integer &i)
{
	Integer tmp;
	tmp.equals(this->toInt() - i.toInt());
	return tmp;
}

Integer Integer::mul(const Integer &i)
{
	Integer tmp;
	tmp.equals(this->toInt() * i.toInt());
	return tmp;
}

Integer Integer::div(const Integer &i)
{
	Integer tmp;
	tmp.equals(this->toInt() / i.toInt());
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
	if (this->toInt() == i)
		return true;
	else
		return false;
}

bool Integer::operator==(const Integer &i)
{
	if (this->toInt() == i.toInt())
		return true;
	else
		return false;
}

bool Integer::operator!=(int i)
{
	if (this->toInt() != i)
		return true;
	else
		return false;
}

bool Integer::operator!=(const Integer &i)
{
	if (this->toInt() != i.toInt())
		return true;
	else
		return false;
}

int Integer::toInt() const
{
	stringstream ss(this->c_str());
	int n;
	ss >> n;
	return n;
}

//string Integer::toString()
//{
//	string s = tString();
//	return s;
//}

void Integer::equals(string s)
{
	Number *n;
	Integer i;
	n = &i;
	if (n->isNaN())
	{
		this->assign("0");
		cout << s << " Double" << endl;
		dNumbers.push_back(stod(s));
	}
		
	else
	{
		cout << s << " Integer" << endl;
		this->assign(s);
		iNumbers.push_back(stoi(s));
		
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
	recursiveNaN(s);
	int num;
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

//bool Integer::isNaN()
//{
//	return this->nan;
//}

void Integer::writeNumbers(int amount)
{
	ofstream outfile("Double.txt");
	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	for (j = dNumbers.begin(); j < dNumbers.end(); j++)
	{
		outfile << *j << endl;
	}
	outfile.close();

	ofstream outtfile("Integer.txt");
	if (!outtfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}
	for (i = iNumbers.begin(); i < iNumbers.end(); i++)
	{
		outtfile << *i << endl;
	}
	outtfile.close();
}

void Integer::recursiveNaN(string s)
{
	int num;
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
			cout << "Is a valid integer" << endl;

	}

	else
	{
		if (s[i] != 0)
		{
			cout << "Not an Integer" << endl;
		}
		else
			return;
	}

}
