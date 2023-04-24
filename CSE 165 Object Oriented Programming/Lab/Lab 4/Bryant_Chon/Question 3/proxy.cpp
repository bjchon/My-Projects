#include <iostream>
using namespace std;

class Subject{
    public:
        virtual void f(){
            cout << "Subject f()" << endl;
        }
        virtual void g(){
            cout << "Subject g()" << endl;
        }
        virtual void h(){
            cout << "Subject h()" << endl;
        }
};

class Proxy: public Subject{
    private: 
        Subject *p;
    public:
        Proxy(){}
        void pointerchange(Subject *ptr){
            p = ptr;
        }
        Proxy(Subject *ptr){
            p = ptr;
        }
        void f(){
            p->f();
            cout << "Proxy f()" << endl;
        }
        void g(){
            p->g();
            cout << "Proxy g()" << endl;
        }
        void h(){
            p->h();
            cout << "Proxy h()" << endl;
        }
};

class Implementation1: public Subject{

    public:
        void f(){
            cout << "Implementation 1 f()" << endl;
        }
        void g(){
            cout << "Implementation 1 g()" << endl;
        }
        void h(){
            cout << "Implementation 1 h()" << endl;
        }
};

class Implementation2: public Subject{

    public:
        void f(){
            cout << "Implementation 2 f()" << endl;
        }
        void g(){
            cout << "Implementation 2 g()" << endl;
        }
        void h(){
            cout << "Implementation 2 h()" << endl;
        }
};

int main(){
    Implementation1 i1;
    Implementation2 i2;
    Proxy p1(&i1), p2(&i2);
    cout << "Testing f()" << endl;
    p1.f();
    p2.f();
    p1.pointerchange(&i2);
    p1.f();
    cout << "Testing g()" << endl;
    p1.g();
    p2.g();
    p1.pointerchange(&i1);
    p1.g();
    cout << "Testing h()" << endl;
    p1.h();
    p2.h();
    p1.pointerchange(&i2);
    p1.h();
}