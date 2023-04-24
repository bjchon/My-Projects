//Bryant Chon
//Student ID:0550190
//Assignment 15
//STL Main File

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "Header.h"

using std::string;
using std::vector;
using namespace std;

int main(void)
{
	priQue<int> iQue;
	priQue<string> sQue;

	multiset<priQue> s;
	s.insert(enqueue("C++", 9));
	s.insert(enqueue("is ", 7));
	s.insert(enqueue("Fun",3));

	multiset<priQue>::iterator p;
	for (p = s.begin(); p != s.end(); p++)
	{
		priQue n = *p;
		cout << "Id: " << n.getId() << "/t Data: " << n.getData() << endl;
	}

	sQue.enqueue("Hello", 3);
	sQue.enqueue("Goodbye", 9);
	string s = sQue.dequeue();

	return 0;
}