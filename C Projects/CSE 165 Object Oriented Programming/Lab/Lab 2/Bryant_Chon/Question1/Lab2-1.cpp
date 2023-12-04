#include <iostream>
#include <string.h>
using namespace std;

char* copy(char* array)
{
    int len = strlen(array);
    char* copy = new char[len];
    for( int i = 0; i < len; i++)
         copy[i] = array[i];
    return copy;
}

main(){
    static char statarray[] = {"Hello CSE 165"};
    char* cop = copy(statarray);
    cout << "Original: " << statarray << endl;
    cout << "Original: " << &statarray << endl;
    cout << "Copy: " << copy(cop) << endl;
    cout<< "Copy: " << &cop << endl;
    
    delete[] cop;
    return 0;
}