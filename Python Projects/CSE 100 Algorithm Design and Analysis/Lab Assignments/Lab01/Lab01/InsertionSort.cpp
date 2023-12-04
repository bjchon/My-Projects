#include <iostream>

using namespace std;

void InsertionSort(int A[], int len)
{
    int key, j;
    for(int i = 1; i < len; i++)
   {
       key = A[i];
       j = i - 1;
      
       while (j >= 0 && A[j] > key)
       {
           A[j + 1] = A[j];
           j = j - 1;
       }
       A[j + 1] = key;
  
   for(int j=0; j<=i; j++)
   {
   cout<<A[j]<<";";
   }
  
       cout<<endl;
   }
}

int main()
{
    int n = 0;
    cout <<"How many integers?";
    cin >> n;
    int arr[n];
    
    cout<<"Enter your integers:"<<endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    InsertionSort(arr, n);
    
    return 0;
}
