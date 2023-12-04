#include <iostream>
using namespace std;

void MaxHeapify(int arr[], int n, int i)
{
    int largest = i; // Parent index
    int l = 2 * i; // Left Child Index = 2*i + 1
    int r = 2 * i + 1; // Right Child Index = 2*i + 2
  
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
    else
        largest = i;
  
    // If right child is larger than largest thus far
    if (r < n && arr[r] > arr[largest])
        largest = r;
  
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        MaxHeapify(arr, n, largest); // recursively call MaxHeapify for the affected sub-tree
    }
}

void BuildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) //starts at parent index
        MaxHeapify(arr, n, i);   
}
  

void HeapSort(int arr[], int n)
{
    BuildMaxHeap(arr, n);
  
    for (int i = n - 1; i >= 1; i--) // get element from heap
        {
            swap(arr[0], arr[i]); // move current root to the end
            MaxHeapify(arr, i, 0); // call max heapify on the reduced heap
        }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    HeapSort(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << ";";
}