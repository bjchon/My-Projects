//Bryant Chon
//Student ID:0550190
//MidTerm
//Random header file

#ifndef RANDOM
#define RANDOM

#include <vector>
#include "Integer.h"
#include "Double.h"
using std::vector;

namespace Bryant
{
	class Random
	{
	private:
		vector<double> x;
		int min;
		int max;
		void fillVect();
		void shuffle();
		int index;
		const int num = 250;
		const int ninetyPercent = 225;

	public:

		//Constructors
		Random();
		Random(double min, double max);
		Random(Double min, Double max);
		Random(int seed);

		//Functions
		int nextInt();
		Integer nextInteger();
		double nextDbl();
		Double nextDouble();
		void setRange(double min, double max);
		void setRange(Double min, Double max);






	};

}

#endif