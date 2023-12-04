#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "What is the radius of your circle in inches?" << endl;
    int rad = 0;
    cin >> rad;
    cout << "The area of your circle is: " << M_PI * rad * rad << endl;

    return 0;
}

