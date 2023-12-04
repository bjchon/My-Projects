//: C15:AddingVirtuals.cpp
// Adding virtuals in derivation
#include <iostream>
#include <string>
using namespace std;

class Pet {
    string pname;
    public:
        Pet(const string& petName) : pname(petName) {}
        virtual string name() = 0;
        virtual string speak() = 0;
};

string Pet::name(){return pname;}

class Dog : public Pet {
    public:
        Dog(const string& petName) : Pet(petName) {}

        virtual string sit() {
            return Pet::name() + " sits";
        }
        string name() { return Pet::name();}
        string speak() {return Pet::name() + " says 'Bark!'";}
};

int main() {

    Pet* p = new Dog("bob");

    cout << "p->speak() = "<< p->speak() << endl;

}