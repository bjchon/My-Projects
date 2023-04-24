//Bryant Chon
//Student ID:0550190
//Assignment 7
//menu cpp file

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;
using std::vector;


#include "menu.h"

Menu::Menu()
	: count(0)
{

}


void Menu::addMenu(string des, void(*f)())
{

	menuItem m;
	m.descript = des;
	m.func = f;
	mi.push_back(m);

}

void Menu::runMenu()
{
	for (;;)
	{
		system("CLS");
		for (i = mi.begin(); i != mi.end(); i++)
		{
			cout << i->descript << endl;
		}
		runSelection();
	}

}
void Menu::runSelection()
{
	int select;
	count = 1;
	cin >> select;
	if (select <= mi.size())
	{
		for (i = mi.begin(); i != mi.end(); i++)
		{
			if (select == count)
				i->func();
			count++;
		}
	}
}

void Menu::waitKey()
{

	cout << "Select another Menu Item to continue" << endl;
	while (!_kbhit());

	fflush(stdin);
}