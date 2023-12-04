#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Text{

    private:string txt;

    public:
    Text(){
        txt = "";
    }

    Text(string textfile){
    fstream newfile;
    newfile.open(textfile, ios::in);
    while(getline(newfile, txt))
    newfile.close();;
    }

    string contents(){
        return txt;
    }
};