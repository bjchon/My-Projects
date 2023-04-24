//Bryant Chon
//Student ID:0550190
//MidTerm
//Random cpp file

#include <iostream>
#include <vector>
#include <ctime>
#include "Random.h"

using namespace std;
using std::vector;


namespace Bryant
{
	void Random::fillVect()
	{
		x.clear();
		for (int i = 0; i < num; i++)
		{
			double r = (((double)rand() / (double)RAND_MAX) * (max - min)) + min;
			x.push_back(r);
		}
		index = 0;
		shuffle();
	}

	void Random::shuffle()
	{
		int tmpA = rand() % num;
		int tmpB = rand() % num;

		for (int i = 0; i < ninetyPercent; i++)
		{
			x[tmpA] = x[tmpB];
			tmpA = rand() % num;
			tmpB = rand() % num;
		}
	}

	Random::Random()
	{
		min = 0;
		max = RAND_MAX;
		fillVect();
		srand(time(0));
	}

	Random::Random(double min, double max)
	{
		this->min = min;
		this->max = max;
		fillVect();
		srand(time(0));
	}

	Random::Random(Double min, Double max)
	{
		this->min = min.toDouble();
		this->max = max.toDouble();
		fillVect();
		srand(time(0));
	}

	Random::Random(int seed)
	{
		min = 0;
		max = RAND_MAX;
		fillVect();
		srand(seed);
	}

	int Random::nextInt()
	{
		if (index == ninetyPercent)
		{
			fillVect();
		}
		return static_cast<int>(x[index++]);
	}

	Integer Random::nextInteger()
	{
		if (index == ninetyPercent)
		{
			fillVect();
		}
		Integer i = static_cast<int>(x[index]);
		index++;
		return i;

	}

	double Random::nextDbl()
	{
		if (index == ninetyPercent)
		{
			fillVect();
		}
		return x[index++];

	}

	Double Random::nextDouble()
	{
		if (index == ninetyPercent)
		{
			fillVect();
		}
		Double d = x[index];
		index++;
		return d;
	}

	void Random::setRange(double min, double max)
	{
		x.clear();
		this->min = min;
		this->max = max;
		fillVect();
	}

	void Random::setRange(Double min, Double max)
	{
		x.clear();
		this->min = min.toDouble();
		this->max = max.toDouble();
		fillVect();
	}
	
}
