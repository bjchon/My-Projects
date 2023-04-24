//Bryant Chon
//Student ID:0550190
//Final Project
//Batting Average CPP File

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <vector>
#include <fstream>
#include "BA.h"

using std::string;
using std::vector;
using namespace std;

void readNumbers();

int main()
{
	readNumbers();
}

void readNumbers()
{
	Stack info;
	string names;
	string avgs;
	ifstream infile("avgs.txt");
	char input[100];
	string temp;
	while (infile >> input)
	{
		
		for (int x = 0; x < 10; x++)
		{
			if (input[x] != '\0')
			{
				if (isalpha(input[x]))
					names.push_back(input[x]);
				else
					avgs.push_back(input[x]);
			}
			else
				break;
		}

		if (!names.empty() && !avgs.empty())
		{
			if(avgs == "..")
				avgs.clear();
			else
			{
				info.addplayer(names, stod(avgs));
				names.clear();
				avgs.clear();
			}
		}

	}
	
	info.printhighnames();
	info.printhighavg();
	info.printlownames();
	info.printlowavg();

}
