#include <iostream>
#include <vector>
using namespace std;

class Counted{
    friend ostream& operator<< (ostream& out, const Counted& o);
    private:
        int id;
        static int count;
    public:
        Counted() : id(count++){cout << "An object is being created, id:" << id << endl;}
        ~Counted() {cout << "The created object is being destroyed, id: " << id << endl;}
};

int Counted::count = 0;

ostream& operator<< (ostream& out, const Counted& o) {
    out << o.id;
    return out;
}

int main(){
    vector<Counted*> c;
    for(int i = 0; i < 5; i++)
        c.push_back(new Counted);

    for(int i = 0; i < c.size(); i++)
        cout << "Counted Object: " << *c[i] << endl;

    for(int i = 0; i < c.size(); i++)
        delete c[i];

}