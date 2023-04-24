#include <iostream>
#include "Lab1-2def.cpp"
using namespace std;

int main(){
    fun();
    char x = fun('c');
    cout << x << endl; 
    int y = fun(9);
    cout << y << endl; 
    float z = 3.14;
    z = fun(z);
    cout << z << endl; 
    
    return 0;
}