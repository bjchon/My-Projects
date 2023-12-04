//Bryant Chon


#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;
#include "menu.h"

void func1();
void func2();
void func3();
void Exit();
void waitKey();


int main()
{
	Menu myMenu;
	string str1 = "1. Function 1 ";
	string str2 = "2. Function 2 ";
	string str3 = "3. Function 3 ";
	string str4 = "4. Function 4 ";
	myMenu.addMenu(str1, func1);
	myMenu.addMenu(str2, func2);
	myMenu.addMenu(str3, func3);
	myMenu.addMenu(str4, Exit);

	myMenu.runMenu();

}

void func1()
{
	Menu myMenu;
	char c;
	cout << "hello from function 1"<<endl;
	cin >> c; 
	myMenu.waitKey();

}

void func2()
{
	Menu myMenu;
	char c;
	cout << "hello from function 2"<<endl;
	cin >> c;
	myMenu.waitKey();

}
void func3()
{
	Menu myMenu;
	char c;
	cout << "hello from function 3"<<endl;
	cin >> c;
	myMenu.waitKey();
}
void Exit()
{
	cout << "GoodBye" << endl;
	exit(0);

}