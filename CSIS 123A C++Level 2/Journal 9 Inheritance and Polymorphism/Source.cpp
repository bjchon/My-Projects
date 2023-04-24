//Bryant Chon
//Student ID:0550190
//Journal 9
//Main

#include <iostream>

using namespace std;

class Animal
{
private:
	int legs;

public:
	void setlegs(int legs);
	int getLegs();
	Animal() : legs(4) {}
	void talk();
	virtual void speak() = 0;
};

void Animal::talk()
{
	speak();
}

void Animal::setlegs(int legs)
{
	this->legs = legs;
}

int Animal::getLegs()
{
	return this->legs;
}

class Cat : public Animal
{
public:
	void speak();
};

class Dog : public Animal
{
public:
	void speak();
};

class Pig : public Animal
{
public:
	void speak();
};

void Cat::speak()
{
	cout << "meow" << endl;
}

void Dog::speak()
{
	cout << "woof" << endl;
}

void Pig::speak()
{
	cout << "oink" << endl;
}

int main()
{
	Cat cat;
	Dog dog;
	Pig pig;
	Animal *an[2];
	an[0] = &cat;
	an[1] = &dog;
	an[2] = &pig;

	for(int i = 0; i <= 2; i++)
	{
		an[i]->talk();
	}

	return 0;

}