//Bryant Chon
//Student ID:0550190
//Assignment 3
//Integer header file

#ifndef INTEGER
#define INTEGER

class Integer
{
private:
	int inte; 
public:
	void equals(int i);
	Integer add(const Integer &i);
	Integer sub(const Integer &i);
	Integer mul(const Integer &i);
	Integer div(const Integer &i);
	int toInt() const;
	//Constructors
	Integer();
	Integer(int i);
	Integer(const Integer &i);
};

#endif
