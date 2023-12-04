#include<stdio.h>
#include<string.h>
#include <stdint.h>
#include <stdlib.h>

void printArr(int *a, int size, char *name){
	//Your code here
    printf("%s array's contents: ", name);
    for (int i = 0; i < size; ++i) 
        printf("%d ", *(a+i));
    printf("\n");
}

int* arrCopy(int *a, int size){
	//Your code here
    int *b;
    b = a;
    return b;
}

int main(){
    int n;
    //int *arr;
    int *arr_copy;
    int i;
    int x;
    int count = 1;
    int num = 0;
    printf("Enter the size of array you wish to create: ");
    scanf("%d", &n);

    //Dynamically create an int array of n items
    //Your code here
    int *arr = (int *) malloc(n * sizeof(int));
    int *q = arr;
    //for (int i = 0; i < n; ++i) *(arr + i) = 2*i; // Intialize array
    
    for (int i = 0; i < n; ++i) 
        {
            printf("Enter array element # %d: ", count);
            scanf("%d", &x);
            *(arr + i) = x;
            count++;
        }

    printf("\n");

    //Ask user to input content of array
	//Your code here
    //arr = q;
	
/*************** YOU MUST NOT MAKE CHANGES BEYOND THIS LINE! ***********/
	
	//Print original array
    printArr(arr, n, "Original");

	//Copy array
    arr_copy = arrCopy(arr, n);

	//Print new array
    printArr(arr_copy, n, "Copied");

    printf("\n");

    return 0;
}