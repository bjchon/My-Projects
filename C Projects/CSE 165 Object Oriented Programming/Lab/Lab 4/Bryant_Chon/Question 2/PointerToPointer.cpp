#include <iostream>
using namespace std;

int num1 = 24;
int num2 = 8;

void PtoP(int**& pointer){
    *pointer = &num2;
}

int main(){
    
    int* p = &num1;
    int** pp = &p;
    cout << "Address of num1: " << &num1 << endl;
    cout << "Adress of num2: " << &num2 << endl;
    cout << "Adress of pp: " << *pp << endl;
    cout << "Original Value: " << **pp << endl;
    PtoP(pp);
    cout << "Adress of pp: " << *pp << endl;
    cout << "Modified Value: " << **pp << endl;

}