#include <iostream>
#include <cstring>
using namespace std;

class myClass{
    char myArray[100];
    public:
        inline myClass(char c = ' '){memset(myArray,c,sizeof(myArray));}
        
        inline void print(){
            for(int i = 0; i < sizeof(myArray); i++)
                cout<<myArray[i]<<endl;
        }
};

int main(){
    myClass m('a');
    m.print();

    return 0;
}