#include <iostream>
#include <vector>
using namespace std;

 vector<vector<int>> InsertionSort(vector<vector<int>> vec, int len) //sorts vectors using insertion sort
{
    int k;
    vector<vector<int>> temp;
    int key;
    temp = vec;

    for(int i = 9; i >= 0 ; i--) //check each digit starting from the last
    {
        for(int j = 1; j < len; j++) //sorts each vector according to digit i
            {
                key = temp[j][i]; //next vector
                k = j - 1; // previous vector 

                while(k >= 0 && temp[k][i] > key)
                    {
                        swap(temp[k+1], temp[k]);
                        k--;
                    }             
            }
    }

   return temp;

} 

vector<vector<int>> RadixSort(vector<vector<int>> vec, int n)//fills out vectors
{
    int num = 0;
    vector<vector<int>> temp;

    for(int i = 0; i < n; i++)
       { 
            vector<int> v1;

            for(int j = 0; j < 10; j++)
                {
                    cin >> num;
                    v1.push_back(num);
                }

            temp.push_back(v1);
       }

    return temp;
}

void print(vector<vector<int>> vec)
{
    for (int i = 0; i < vec.size(); i++)        
        {
            for (int j = 0; j < 10; j++)
                {
                    cout << vec[i][j] << ";";
                }
                
            cout << endl;
        }
}

int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> vec;
    vec = RadixSort(vec, n);
    vec = InsertionSort(vec, n);
    print(vec);
    
    return 0;

}