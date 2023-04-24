#include "text.h"

int main(){
    string textfile = "textfile.txt";
    Text t1 = Text(textfile);
    cout << t1.contents();
}