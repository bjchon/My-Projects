//Bryant Chon
//Student ID:0550190
//Assignment 8
//main

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include "Integer.h"
#include "Double.h"
#include "menu.h"

using namespace std;
using Bryant::Double; 
using Bryant::Integer;
using Bryant::Menu;




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

void Exit()
{
	cout << "GoodBye" << endl;
	exit(0);

}

void doubleAdd()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double *z = new Double();
	*z = x + y;
	cout << "The sum is " << z->toDouble() << endl;
	delete z;
	myMenu.waitKey();

}

void intAdd()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer *z = new Integer();
	*z = x + y;
	cout << "The sum is " << z->toInt() << endl;
	delete z;
	myMenu.waitKey();

}

void doubleSub()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double *z = new Double();
	*z = x - y;
	cout << "The difference is " << z->toDouble() << endl;
	delete z;
	myMenu.waitKey();

}

void intSub()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer *z = new Integer();
	*z = x - y;
	cout << "The difference is " << z->toInt() << endl;
	delete z;
	myMenu.waitKey();

}

void doubleMul()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double *z = new Double();
	*z = x * y;
	cout << "The product is " << z->toDouble() << endl;
	delete z;
	myMenu.waitKey();

}

void intMul()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer *z = new Integer();
	*z = x * y;
	cout << "The product is " << z->toInt() << endl;
	delete z;
	myMenu.waitKey();

}

void doubleDiv()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double *z = new Double();
	*z = x / y;
	cout << "The quotient is " << z->toDouble() << endl;
	delete z;
	myMenu.waitKey();
}

void intDiv()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer *z = new Integer();
	*z = x / y;
	cout << "The quotient is " << z->toInt() << endl;
	delete z;
	myMenu.waitKey();

}

void equalsdub()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double *z = new Double();
	*z = x == y;
	if (*z == true)
		cout << "Yes, Your Doubles Are Equal" << endl;
	else
		cout << "No, Your Doubles Are not Equal" << endl;
	delete z;
	myMenu.waitKey();
}

void equalsint()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer *z = new Integer();
	*z = x == y;
	if (*z == true)
		cout << "Yes, Your Integers Are Equal" << endl;
	else
		cout << "No, Your Integers Are Not Equal" << endl;
	delete z;
	myMenu.waitKey();
}

void notequaldub()
{
	double x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Double *z = new Double();
	*z = x != y;
	if (*z == true)
		cout << "Yes, Your Doubles Are Not Equal" << endl;
	else
		cout << "No, Your Doubles Are Equal" << endl;
	delete z;
	myMenu.waitKey();
}

void notequalint()
{
	int x, y;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> y;
	Integer *z = new Integer();
	*z = x != y;
	if (*z == true)
		cout << "Yes, Your Integers Are Not Equal" << endl;
	else
		cout << "No, Your Integers Are Equal" << endl;
	delete z;
	myMenu.waitKey();
}

void isitdouble()
{
	Menu myMenu;
	string dbl;
	cout << "Choose a number:" << endl;
	cin >> dbl;
	Double *z = new Double(dbl);
	*z = dbl;
	delete z;
	myMenu.waitKey();
}

void isitinteger()
{
	Menu myMenu;
	string inte;
	cout << "Choose a number:" << endl;
	cin >> inte;
	Integer *z = new Integer(inte);
	*z = inte;
	delete z;
	myMenu.waitKey();
}