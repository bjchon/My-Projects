//Bryant Chon
//Student ID:0550190
//Final Project
//Batting Average Header File

#ifndef TEMPLATE
#define TEMPLATE
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using namespace std;


class Stack
{
private:
	vector<string> highnames;
	vector<string> lownames;
	vector<double> highavgs;
	vector<double> lowavgs;

public:
	void addplayer(string names, double avg);//puts st on top of stack
	void printhighnames();
	void printlownames();
	void printhighavg();
	void printlowavg();
};

void Stack::addplayer(string names, double avg)
{
	if (highnames.empty() && lownames.empty())
	{
		highnames.push_back(names);
		lownames.push_back(names);
		highavgs.push_back(avg);
		lowavgs.push_back(avg);
	}
	else
	{
		if(avg > highavgs.front())
			{
				highavgs.clear();
				highnames.clear();
				highavgs.push_back(avg);
				highnames.push_back(names);
			}
		else if (avg < lowavgs.front())
		{
			lowavgs.clear();
			lownames.clear();
			lowavgs.push_back(avg);
			lownames.push_back(names);
		}
		else if (avg == highavgs.front())
			highnames.push_back(names);
		else if (avg == lowavgs.front())
			lownames.push_back(names);
	}

}

void Stack::printhighnames()
{
	for (vector<string>::iterator i = highnames.begin(); i != highnames.end(); i++)
		cout << *i << endl;
}

void Stack::printlownames()
{
	for (vector<string>::iterator i = lownames.begin(); i != lownames.end(); i++)
		cout << *i << endl;
}

void Stack::printhighavg()
{
	for (vector<double>::iterator i = highavgs.begin(); i != highavgs.end(); i++)
		cout << *i << endl;
	
}

void Stack::printlowavg()
{
	for (vector<double>::iterator i = lowavgs.begin(); i != lowavgs.end(); i++)
		cout << *i << endl;
}


#endif