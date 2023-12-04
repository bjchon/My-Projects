#include <iostream>
#include <limits.h>

using namespace std;

void ExtendedBottomUpCutRod(int p[],int n)
{
    int r[n+1]; //new array to store max revenue
    int s[n+1]; //new array stores optimal cutting
    r[0] = 0;

    for(int j = 1; j <= n; j++) //loop goes through each cut length
    {
        int q = INT_MIN; //stores max revenue of cuts
        for(int i = 1; i <= j; i++) // find max revenues cut positions
            {
                if(q < p[i] + r[j-i])
                    {
                        q = p[i] + r[j-i]; //stores max revenue thus far
                        s[j] = i; //stores best cuts for max revenue thus far
                    }
            }
        r[j] = q;
    }

    cout << r[n] << endl; //print max revenue

    //Print-Cut-Rod-Solution
    while( n > 0 ) //print cut length to produce max revenue
    {
        cout << s[n] << " ";
        n = n - s[n];
    }
    cout << "-1" << endl;

}

int main() 
{
    int n;
    cin>>n;
    int price[n+1];
    for(int i=1;i<=n;i++)
        cin>>price[i];

    ExtendedBottomUpCutRod(price,n);

    return 0;
}