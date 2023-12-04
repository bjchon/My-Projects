//Bryant Chon
//Student ID:0550190
//Assignment 8
//menu header file

#ifndef MENU
#define MENU
#include <string>
#include <vector>
#include <conio.h>
using std::vector;
using std::string;

namespace Bryant
{
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
		static Menu *instance;


	public:
		Menu();
		void addMenu(string des, void(*f)());
		void runMenu();
		void waitKey();
		static Menu *getInstance();
		

	};
}

#endif