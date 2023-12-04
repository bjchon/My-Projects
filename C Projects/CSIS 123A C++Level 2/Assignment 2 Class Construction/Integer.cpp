//Bryant Chon
//Student ID:0550190
//Assignment 2
//Integer calculations

#include <iostream>
#include "Integer.h"

using namespace std;

void Integer::intequals(int INTEG)
{
	inte = INTEG;
}

Integer Integer::intadd(const Integer &i)
{
	Integer tmp;
	tmp.inte = (inte + i.inte);
	return tmp;
}

Integer Integer::intsub(const Integer &i)
{
	Integer tmp;
	tmp.inte = (inte - i.inte);
	return tmp;
}

Integer Integer::intmul(const Integer &i)
{
	Integer tmp;
	tmp.inte = (inte * i.inte);
	return tmp;
}

Integer Integer::intdiv(const Integer &i)
{
	Integer tmp;
	tmp.inte = (inte / i.inte);
	return tmp;
}

int Integer::toInt()
{
	return inte;
}