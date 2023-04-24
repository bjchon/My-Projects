#include <iostream>

using namespace std;

template <class T>
T fibonacci(T n) {
    T f[n + 1];
    f[0] = 0;
    f[1] = 1;
    
    if(n == 0 || n == 1)
        return f[n];
    
    int i = 2;
    while(i <= n) {
        f[i] = f[i-1] + f[i-2];
        i++;
    }

    return f[n];
}


int main() {
    long long int x = 90;
    cout << fibonacci(x) << endl;

return 0;
}