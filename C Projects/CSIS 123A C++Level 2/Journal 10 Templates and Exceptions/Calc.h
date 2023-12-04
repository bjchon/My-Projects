//Bryant Chon
//Student ID:0550190
//Journal 10
//Calc Header File

#ifndef CALC
#define CALC
#include <exception>
#include <string>
#include <iostream>

using std::string;
using std::exception;
using namespace std;


class calcException : public exception
{
private :
	string message;
public :
	calcException(string msg) : message(msg) {}
	virtual const char *what() { return message.c_str(); }
};

template <class T>
class Calc
{
private:
	T x, y;
public:
	Calc() { x = 0, y = 0; }
	Calc(T a, T b) { x = a; y = b; }

	T add();
	T sub();
	T mul();
	T div();
};

template <class T>
T Calc<T>::add()
{
	if (y < 0)
		throw (calcException("Invalid Number"));
	else
	{
		cout << "The sum is ";
		return this->x + this->y;
	}
}

template <class T>
T Calc<T>::sub()
{
	if (y < 0)
		throw (calcException("Invalid Number"));
	else
	{
		cout << "The Difference is ";
		return this->x - this->y;
	}
}

template <class T>
T Calc<T>::mul()
{
	if (y < 0)
		throw (calcException("Invalid Number"));
	else
	{
		cout << "Product is ";
		return this->x * this->y;
	}
}

template <class T>
T Calc<T>::div()
{
	if (y == 0)
		throw (calcException("Invalid Number"));
	else
		cout << "Quotient is ";
		return this->x / this->y;
}

#endif