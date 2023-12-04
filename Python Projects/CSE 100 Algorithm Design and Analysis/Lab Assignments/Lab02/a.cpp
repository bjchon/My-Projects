#include<iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1; //left number of elements
int n2 = r - m; //right number of elements
int L[n1], R[n2]; // left array, right array

//fiil arrays
for (i = 0; i < n1; i++)
    L[i] = arr[l + i];
for (j = 0; j < n2; j++)
    R[j] = arr[m + 1+ j];

//Sort and Merge Arrays
i = 0; // Index for Left array 
j = 0; // Index for Right array
k = l; // Index for Merged array

while (i < n1 && j < n2)
{
    if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
    else
    {
        arr[k] = R[j];
        j++;
    }

k++;
}

//Handles leftover elements for the left
while (i < n1)
{
    arr[k] = L[i];
    i++;
    k++;
}

//Handles leftover elements for the right
while (j < n2)
{
    arr[k] = R[j];
    j++;
    k++;
}

}

//Breaks down array
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
        {
            int m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
        }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<";";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n; i++)
    cin>>arr[i];

    mergeSort(arr, 0, n-1);

    printArray(arr, n);
    return 0;
}
