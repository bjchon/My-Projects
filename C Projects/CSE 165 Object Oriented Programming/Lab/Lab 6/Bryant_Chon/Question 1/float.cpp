#include <iostream>
using namespace std;


class myClass{
    const float f1;
    float f2;

    public:
        myClass(float constant, float flo);
};

myClass::myClass(float constant, float flo): f1(constant), f2(flo) {}

int main(){
    myClass c1(1.1,1.2);
}