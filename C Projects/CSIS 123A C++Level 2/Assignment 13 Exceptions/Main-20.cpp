//Bryant Chon
//Student ID:0550190
//Assignment 13
//main

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <fstream>
#include "Integer.h"
#include "Double.h"
#include "Number.h"

using namespace std;
#include "menu.h"

void Exit();
void doubleAdd();
void intAdd();
void doubleSub();
void intSub();
void doubleMul();
void intMul();
void doubleDiv();
void intDiv();
void equalsdub();
void equalsint();
void notequaldub();
void notequalint();
void isitdouble();
void isitinteger();
void readNumbers();



int main()
{
	Menu myMenu;
	myMenu.addMenu("1. Add Doubles", doubleAdd);
	myMenu.addMenu("2. Add Integers", intAdd);
	myMenu.addMenu("3. Subtract Doubles", doubleSub);
	myMenu.addMenu("4. Subtract Integers", intSub);
	myMenu.addMenu("5. Multiply Doubles", doubleMul);
	myMenu.addMenu("6. Multiply Integers", intMul);
	myMenu.addMenu("7. Divide Doubles", doubleDiv);
	myMenu.addMenu("8. Divide Integers", intDiv);
	myMenu.addMenu("9. Are Your Doubles Equal?", equalsdub);
	myMenu.addMenu("10. Are Your Integers Equal?", equalsint);
	myMenu.addMenu("11. Are Your Doubles not Equal?", notequaldub);
	myMenu.addMenu("12. Are Your Integers not Equal?", notequalint);
	myMenu.addMenu("13. Is it a Double?", isitdouble);
	myMenu.addMenu("14. Is it an Integer?", isitinteger);
	myMenu.addMenu("15. Exit", Exit);
	myMenu.runMenu();

	return 0;
}

void readNumbers()
{

	ifstream infile("FileIO.txt");
	char input[100];
	Integer *i = new Integer();
	Double *d = new Double();
	while(infile.getline(input, 100))
		i->equals(input);
	i->writeNumbers(100);


	infile.close();
}

void Exit()
{
	cout << "GoodBye" << endl;
	exit(0);

}

void doubleAdd()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Double e = v;
		Double f = w;
		e.equals(v);
		f.equals(w);
		Double z;
		z = stod(x) + stod(y);
		cout << "The sum is " << z.toDouble() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}
	

}

void intAdd()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Integer e = v;
		Integer f = w;
		e.equals(v);
		f.equals(w);
		Integer z;
		z = stoi(x) + stoi(y);
		cout << "The sum is " << z.toInt() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}

}

void doubleSub()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Double e = v;
		Double f = w;
		e.equals(v);
		f.equals(w);
		Double z;
		z = stod(x) - stod(y);
		cout << "The Difference is " << z.toDouble() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}

}

void intSub()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Integer e = v;
		Integer f = w;
		e.equals(v);
		f.equals(w);
		Integer z;
		z = stoi(x) - stoi(y);
		cout << "The Difference is " << z.toInt() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}

}

void doubleMul()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Double e = v;
		Double f = w;
		e.equals(v);
		f.equals(w);
		Double z;
		z = stod(x) * stod(y);
		cout << "The Product is " << z.toDouble() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}

}

void intMul()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Integer e = v;
		Integer f = w;
		e.equals(v);
		f.equals(w);
		Integer z;
		z = stoi(x) * stoi(y);
		cout << "The Product is " << z.toInt() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}

}

void doubleDiv()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Double e = v;
		Double f = w;
		e.equals(v);
		f.equals(w);
		Double z;
		z = stod(x) / stod(y);
		cout << "The Quotient is " << z.toDouble() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}
}

void intDiv()
{
	string x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	try
	{
		string v = x;
		string w = y;
		Integer e = v;
		Integer f = w;
		e.equals(v);
		f.equals(w);
		Integer z;
		z = stoi(x) / stoi(y);
		cout << "The Quotient is " << z.toInt() << endl;
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}

}

void equalsdub()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double z;
	z = x == y;
	if (z == true)
		cout << "Yes, Your Doubles Are Equal" << endl;
	else
		cout << "No, Your Doubles Are not Equal" << endl;
	myMenu.waitKey();
}

void equalsint()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double z;
	z = x == y;
	if (z == true)
		cout << "Yes, Your Integers Are Equal" << endl;
	else
		cout << "No, Your Integers Are Not Equal" << endl;
	myMenu.waitKey();
}

void notequaldub()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double z;
	z = x != y;
	if (z == true)
		cout << "Yes, Your Doubles Are Not Equal" << endl;
	else
		cout << "No, Your Doubles Are Equal" << endl;
	myMenu.waitKey();
}

void notequalint()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer z;
	z = x != y;
	if (z == true)
		cout << "Yes, Your Integers Are Not Equal" << endl;
	else
		cout << "No, Your Integers Are Equal" << endl;
	myMenu.waitKey();
}

void isitdouble()
{
	Menu myMenu;
	string dbl;
	cout << "Choose a number:" << endl;
	cin >> dbl;
	try
	{
		string w = dbl;
		Double f = w;
		f.equals(w);
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}
	
}

void isitinteger()
{
	Menu myMenu;
	string inte;
	cout << "Choose a number:" << endl;
	cin >> inte;
	try
	{
		string w = inte;
		Integer f = w;
		f.equals(w);
		myMenu.waitKey();

	}
	catch (NumberException ex)
	{
		cout << ex.getMessage() << endl;
		myMenu.waitKey();
	}
}
