#include <iostream>
#include <stdlib.h>
#include <time.h>  
using namespace std;


int Partition(int arr[], int p , int r) // rearranges the subarray, p , r is pivot
{
   int x = arr[r]; //x = pivot 
   int i = p - 1; // i = first element index minus one

   for (int j = p; j < r ; j++)
   {
       if(arr[j] <= x) //swap if last element is less than or equal to first element
       {
           i++;
           swap(arr[i],arr[j]);
       }
   }

   swap (arr[i+1], arr[r]); // exchange pivot and next i'th element
   return i+1; // return i'th idex

}

int RandomizedPartition(int arr[],int p,int r)//randomly choose pivot
{
   srand(time(0));
   int pivot = rand()%(r-p);
   pivot += p;
   swap(arr[r],arr[pivot]); //exchange last element and pivot, make pivot the last element

   return Partition(arr,p,r);
}

void QuickSort(int arr[], int p, int r) // sort 2 sub arrays
{
   if (p < r)
      {
         int pivot = RandomizedPartition(arr, p, r);
         QuickSort(arr, p, pivot - 1);
         QuickSort(arr, pivot + 1, r);
      }
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int i;

   for (i=0; i < n; i++)
      cin>>arr[i];

   QuickSort(arr, 0, n-1);

   for (i=0; i < n; i++)
      cout<<arr[i]<<";";

   return 0;
}