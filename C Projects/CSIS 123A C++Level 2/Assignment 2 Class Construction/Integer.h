//Bryant Chon
//Student ID:0550190
//Assignment 2
//Integer header file

#ifndef INTEGER
#define INTEGER

class Integer
{
private:
	int inte;
public:
	void intequals(int INTEG);
	Integer intadd(const Integer &i);
	Integer intsub(const Integer &i);
	Integer intmul(const Integer &i);
	Integer intdiv(const Integer &i);
	int toInt();
};

#endif