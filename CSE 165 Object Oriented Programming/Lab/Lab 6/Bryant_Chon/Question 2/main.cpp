#include "myHeader2.h"
using namespace myNamespace;

void test1(){
    myNamespace::fun1();
    myNamespace::fun2();
}

void test2(){
    using myNamespace::fun3;
    using myNamespace::fun4;
    fun3();
    fun4();
}

int main(){
    test1();
    test2();
}