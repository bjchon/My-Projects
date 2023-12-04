#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//function to sort an array using insertion sort algorithm
void insertionSort(int arr[], int size)
{
   int k, j;
   for (int i = 1; i < size; i++)
   {
       k = arr[i];
       j = i - 1;
      
       while (j >= 0 && arr[j] > k)
       {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = k;
  
   for(int j=0; j<=i; j++)
   {
   cout<<arr[j]<<";";
   }
  
       cout<<endl;
   }
}

int main()
{
//variable declaration
int n, arr[20];
  
ifstream file("file.txt");
    if(file.is_open())
    {

        for(int i = 0; i < 5; ++i)
        {
            file >> arr[i];
        }
    }

  
//display output
cout<<"Output: "<<endl;

  
//function calling
   insertionSort(arr, n);
   return 0;
}