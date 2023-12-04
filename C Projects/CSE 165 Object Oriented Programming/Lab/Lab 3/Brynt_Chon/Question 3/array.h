#include <iostream>
using namespace std;
#include <cstdlib>
class AOI{
    private:
        int array[4];
        int* p;
        int len;
    public:
        AOI(){
            len = 4;
            for(int i = 0; i < len; i++)
                array[i] = i+3;
            p = &array[0];
        }
        void print(){
            for(int i = 0; i < len; i++)
                cout << *(p+i) << endl;
        }

};