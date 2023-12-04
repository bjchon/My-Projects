//Bryant Chon
//Student ID: 0550190
//Journal 8
// Main

#include <iostream>
#include <string>

using namespace std;
using std::string;

int sumAscii(char s[100], int i, int sum);

int main()
{
	char str[100];
	cout << "Enter a string : ";
	cin >> str;
	cout << "The sum of your Ascii is " << sumAscii(str, 0, 0) << endl;

	return 0;
}

int sumAscii(char s[100], int i, int sum)
{

	sum = sum + s[i];

	if (s[i] <= 0)
	{
		return sum;
	}
	else
	{
		i++;
		sumAscii(s, i, sum);
	}
}
