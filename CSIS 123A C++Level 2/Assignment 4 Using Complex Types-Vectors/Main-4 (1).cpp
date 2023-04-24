//Bryant Chon
//Student ID:0550190
//Assignment 4
//main

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include "Integer.h"
#include "Double.h"

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


int main()
{	
	Menu myMenu;
	myMenu.addMenu("1. Add Doubles", doubleAdd);
	myMenu.addMenu("2. Add Integers", intAdd);
	myMenu.addMenu("3. Subtract Doubles", doubleSub );
	myMenu.addMenu("4. Subtract Integers", intSub);
	myMenu.addMenu("5. Multiply Doubles", doubleMul);
	myMenu.addMenu("6. Multiply Integers", intMul);
	myMenu.addMenu("7. Divide Doubles", doubleDiv);
	myMenu.addMenu("8. Divide Integers", intDiv);
	myMenu.addMenu("9. Exit", Exit);
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
	double x, dub;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> dub;
	Double d(x), d3;
	d3 = d.add(dub);
	cout << d3.toDouble() << endl;
	myMenu.waitKey();

}

void intAdd()
{
	int y, inte;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> y;
	cin >> inte;
	Integer i(y), i3;
	i3 = i.add(inte);
	cout << i3.toInt() << endl;
	myMenu.waitKey();

}

void doubleSub()
{
	double x, dub;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> dub;
	Double d(x), d3;
	d3 = d.sub(dub);
	cout << d3.toDouble() << endl;
	myMenu.waitKey();

}

void intSub()
{
	int y, inte;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> y;
	cin >> inte;
	Integer i(y), i3;
	i3 = i.sub(inte);
	cout << i3.toInt() << endl;
	myMenu.waitKey();

}
void doubleMul()
{
	double x, dub;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> dub;
	Double d(x), d3;
	d3 = d.mul(dub);
	cout << d3.toDouble() << endl;
	myMenu.waitKey();

}
void intMul()
{
	int y, inte;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> y;
	cin >> inte;
	Integer i(y), i3;
	i3 = i.mul(inte);
	cout << i3.toInt() << endl;
	myMenu.waitKey();

}
void doubleDiv()
{
	double x, dub;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> x;
	cin >> dub;
	Double d(x), d3;
	d3 = d.div(dub);
	cout << d3.toDouble() << endl;
	myMenu.waitKey();

}
void intDiv()
{
	int y, inte;
	Menu myMenu;
	cout << "Choose 2 numbers" << endl;
	cin >> y;
	cin >> inte;
	Integer i(y), i3;
	i3 = i.div(inte);
	cout << i3.toInt() << endl;
	myMenu.waitKey();

}
