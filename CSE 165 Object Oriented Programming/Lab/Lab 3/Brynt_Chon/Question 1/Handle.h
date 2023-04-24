//: C05:Handle.h
// Handle classes
#ifndef HANDLE_H
#define HANDLE_H

#include<iostream>
using namespace std;

class Handle {
private: int smile;
public:

Handle(){
    smile = 0;
    cout << "Constructor Called" << endl;
};

~Handle(){
    cout << "Destructor Called" << endl;
};

Handle(int x){
    smile = x;
    cout <<"Overload Called: " << smile << endl;
};

};
#endif // HANDLE_H ///:~