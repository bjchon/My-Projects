
#include <stdio.h>
#include <malloc.h>

int** matMult(int **a, int **b, int size) 
{
	// (4) Implement your matrix multiplication here. You will need to create a new matrix to store the product.
	int i = 0, j = 0, k = 0;
	int **temp = (int**)malloc(size * sizeof(int*));
	for (i = 0; i < size; i++)
    	*(temp+i) = (int*)malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			*(*(temp + i)+j) = 0;
			for (k = 0; k < size; k++)
			{
				*(*(temp + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
				// multplies i'th row of the first matrix with k'th column of the second matrix
				//k is used because when the first matrix is in the second column the second matrix is in the second row												    
			}
}
}
   return temp;
}

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	int i, j;
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
            printf("%d\t", *(*(arr+i) + j));
			
        printf("\n");
    }
    printf("\n");

}

int main() {
	int i = 0, j = 0, n = 0, num = 0;
	int **matA = (int**)malloc(n * sizeof(int*)); //It allocates space off the heap to store a pointer of a pointer to an int.
	int **matB = (int**)malloc(n * sizeof(int*)); 
	int **matC = (int**)malloc(n * sizeof(int*));
	// (1) Define 2 (n x n) arrays (matrices). 
	printf("What is the size of your matrix? "); // asks user for size(n) to create n x n array
	scanf("%d", &n);

	for (i = 0; i < n; i++)
    	*(matA+i) = (int*)malloc(n * sizeof(int));//allocates memory for each row
	for (i = 0; i < n; i++)
    	*(matB+i) = (int*)malloc(n * sizeof(int));	
	for (i = 0; i < n; i++)
    	*(matC+i) = (int*)malloc(n * sizeof(int));

	//asks user for numbers to fill the array
	for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) 
			{
				printf("Enter value for array1[%d][%d]", i, j);
				scanf("%d", &num);
			 	*(*(matA+i) + j) = num; 
			} 
	
	for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) 
			{
				printf("Enter value for array2[%d][%d]", i, j);
				scanf("%d", &num);
			 	*(*(matB+i) + j) = num; 
			}



	// (3) Call printArray to print out the 2 arrays here.
	printf("First Matrix \n");
	printArray(matA, n); 
	printf("Second Matrix\n");
	printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	matC = matMult(matA, matB, n);
	// (6) Call printArray to print out resulting array here.
	printf("Matrix Multiplication Result\n");
	printArray(matC, n);

    return 0;
}