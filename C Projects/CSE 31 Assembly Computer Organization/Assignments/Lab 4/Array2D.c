#include <stdio.h>
#include <malloc.h>

void printArray(int**, int);

int main() 
{
	int i = 0, j = 0, n = 5;
	int **arr = (int**)malloc(n * sizeof(int*)); //It allocates space off the heap to store a pointer of a pointer to an int.
	for (i = 0; i < n; i++)
    	*(arr+i) = (int*)malloc(n * sizeof(int));//allocates memory for each row

	// (3) Add your code to complete allocating and initializing the 2-D array here. The content should be all 0.
	for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) 
            *(*(arr+i) + j) = 0;// fills the initial values for array with zero's


    // This will print out your array
	printArray(arr, n);

    // (6) Add your code to make arr a diagonal matrix
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) 
			if (i == j)
			 	*(*(arr+i) + j) = i +1;//creates diagonal matrix when i and j are equal
	
	
	// (7) Call printArray to print array
	printArray(arr, n);
    
	return 0;
}

void printArray(int ** array, int size) 
{
    // (5) Implement your printArr here:
	//prints each row going from left to right
	int i, j;
    for (i = 0; i < size; ++i) 
	{
        for (j = 0; j < size; ++j) 
            printf("%d\t", *(*(array+i) + j));

        printf("\n");
    }
    printf("\n");
}