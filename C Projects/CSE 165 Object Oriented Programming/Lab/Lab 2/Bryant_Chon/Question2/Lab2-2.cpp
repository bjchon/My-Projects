#include <iostream>
#include <string>
using namespace std;

class c2;
class c1{
    private:
    int num1;
    string name1;

    public:
    c1(){
        num1 = 0;
        name1 = "";
    }
    c1(int a, string b){
        num1 = a;
        name1 = b;
    }

    void print(){
        cout << name1 << endl;
        cout << num1 << endl;
    }

    void printc1(c2* ptr);

};

class c2{
    private:
    int num2;
    string name2;

    public:
    c2(){
        num2 = 0;
        name2 = "";
    }

    c2(int a, string b){
        num2 = a;
        name2 = b;
    }

    void print(){
        cout << name2 << endl;
        cout << num2 << endl;
    }

    void printc2(c1* ptr)
    {
        cout << "Name and Age from c2 to c1: " << endl;
        ptr->print();
    }

};

void c1::printc1(c2* ptr){
        cout << "Name and Age from c1 to c2: " << endl;
        ptr->print();
    }

int main(){
    c1 obj1(18, "Jill");
    c2 obj2(19, "Jack");
    c1(* obj11) = &obj1;
    c2* obj22 = &obj2;
    (*obj11).printc1(obj22);
    obj22->printc2(obj11);
}
