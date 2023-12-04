#include <iostream>
using namespace std;

int& pointerMod(int *pointer){
    *pointer = 24;
    return *pointer;
}

int main(){
    int global = 8;
    int* pointer = &global;
    cout << "Initial Value: " << *pointer << endl; 
    cout << "Modified Pointer Value: " << pointerMod(pointer) << endl;
}