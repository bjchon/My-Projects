//Bryant Chon
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;


#include "menu.h"

Menu::Menu()
	: count(0)
{

}


void Menu::addMenu(string des, void(*f)(void))
{
	if (count < MAXCOUNT)
	{
		this->mi[count].func = f;
		std::string descript;
		this->mi[count].descript = des;
		count++;
	}
}

void Menu::runMenu()
{
	for (;;)
	{
		system("CLS");
		for (int i = 0; i < count; i++)
		{
			cout << this->mi[i].descript << endl;
		}
		runSelection();
	}

}
void Menu::runSelection()
{
	int select;

	cin >> select;
	if (select <= count)
		this->mi[select - 1].func();
}

void Menu::waitKey()
{

	cout << "Press any key to continue" << endl;
	while (!_kbhit());

	fflush(stdin);
}