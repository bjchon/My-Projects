//Bryant Chon
//Student ID:0550190
//Assignment 14
//Template Header File

#ifndef TEMPLATE
#define TEMPLATE
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using namespace std;

template <class T>
class Stack : public vector<T>
{
private:
	vector<T> stacks;

public:
	void stackpush(T st);//puts st on top of stack
	T stackpop();//return and remove top of the stack
	T stackpeek();// return top of the stack


};

template <class T>
void Stack<T>::stackpush(T st)
{
	stacks.push_back(st);
}

template <class T>
T Stack<T>::stackpop()
{
	T temp;
	temp = stacks.back();
	stacks.pop_back();
	return temp;
}

template <class T>
T Stack<T>::stackpeek()
{
	return stacks.back();
}

#endif
