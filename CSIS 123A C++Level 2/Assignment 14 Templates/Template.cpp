//Bryant Chon
//Student ID:0550190
//Assignment 14
//Template CPP File

#include <iostream>
#include "Template.h"

using namespace std;

int main()
{
	Stack<int> stInt; //
	stInt.stackpush(5);
	stInt.stackpush(6);
	stInt.stackpush(7);
	cout<< stInt.stackpeek() << endl;
	cout << stInt.stackpop() << endl;
	cout << stInt.stackpeek() << endl;
	Stack<string> stString;
	stString.stackpush("a");
	stString.stackpush("b");
	stString.stackpush("c");
	cout << stString.stackpeek() << endl;
	cout << stString.stackpop() << endl;
	cout << stString.stackpeek() << endl;
	
}
