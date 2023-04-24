#include <iostream>
using namespace std;

class MyClass{
    public:
    class MyException{
            const char* myString;
            public:
                MyException();
                MyException(const char* str) {myString = str;}
                void printException(){cout << myString << endl;}

    };
    void myFun(){
            throw MyException("Exception thrown");
    };
};

int main()
{
    MyClass m;
    try{
        m.myFun();
    }
    catch(MyClass::MyException& e){
        e.printException();
    }
    return 0;
}