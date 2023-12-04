#include<iostream>

using namespace std;

//find max between 2 numbers

int max(int a, int b)
{
  return (a > b)? a:b;
}

// Find Max subArray

int FindMaxCrossing(int arr[], int low, int mid, int high)
{
  int sum = 0;
  int lsum = 0;

  for (int i = mid; i >= low; i--)//get max sum of left side
  {
    sum = sum + arr[i];

    if (sum >= lsum)
      lsum = sum;

  }

  sum = 0;

  int rsum = 0;

  for (int i = mid+1; i <= high; i++)//get max sum of right side
    {
        sum = sum + arr[i];

        if (sum >= rsum)
            rsum = sum;

    }

  return lsum + rsum;

}

int FindMaxSubArray(int arr[], int low, int high)

{

  int mid;

  if (high == low)
    return arr[low];//return this if there's only one element

  mid = (low + high)/2;

  // returns the MaxSubArray by comparing the sums of all the subarrays in this recursive function
  return max(max(FindMaxSubArray(arr, low, mid), FindMaxSubArray(arr, mid+1, high)), FindMaxCrossing(arr, low, mid, high));

}

int main()

{
  int n, i;
  cin>>n;
  int A[n];

  for(i = 0; i < n; i++)
    {
      cin>>A[i];
    }

  cout<<FindMaxSubArray(A, 0, n-1);

  return 0;

}