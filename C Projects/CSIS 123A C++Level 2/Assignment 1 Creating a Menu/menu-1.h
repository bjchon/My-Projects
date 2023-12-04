// Bryant Chon

#ifndef MENU
#define MENU
#include <string>
#include <conio.h>


const int MAXCOUNT = 20;
struct menuItem
{
	void(*func)();
	string descript;


};
class Menu
{
private:
	menuItem mi[MAXCOUNT];
	int count;
	void runSelection();
public:
	Menu();
	void addMenu(string des, void(*f)());
	void runMenu();
	void waitKey();

};

#endif
