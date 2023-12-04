//Bryant Chon
//Student ID:0550190
//Assignment 15
//STL Main File

#ifndef TEMPLATE
#define TEMPLATE
#include <iostream>
#include <string>
#include <vector>
#include <set>

using std::string;
using std::vector;
using namespace std;

template <class T>
struct Node
{
	T Data;
	int pri;
};

template <class T>
class priQue : public multiset<Node<T>>
{
private:
	vector<T> que;
	Node<T> no;
	string Data;
	int pri;
public:
	bool operator < (const priQue& p) const { return p.pri < pri; }
	string getData() { return Data; }
	int getID() { return pri; }
	void enqueue(T q, int r);
	void dequeue();
	T peek();
	int size();

};

template <class T>
void priQue<T>::enqueue(T q, int r)
{
	Node<T> temp;
	temp.Data = q;
	temp.pri = r;
	que.push_back(temp);
}

template <class T>
void priQue<T>::dequeue()
{
	que.erase(0);
}

template <class T>
T priQue<T>::peek()
{
	return T(0);
}

template <class T>
int priQue<T>::size()
{
	return que.size();
}

#endif