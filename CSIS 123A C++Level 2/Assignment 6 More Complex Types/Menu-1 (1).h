//Bryant Chon
//Student ID:0550190
//Assignment 6
//menu header file

#ifndef MENU
#define MENU
#include <string>
#include <vector>
#include <conio.h>
using std::vector;

struct menuItem
{
	void(*func)();
	string descript;

};

class Menu
{
private:
	vector<menuItem> mi;
	vector <menuItem>::iterator i;
	int count;
	void runSelection();

public:
	Menu();
	void addMenu(string des, void(*f)());
	void runMenu();
	void waitKey();

};

#endif