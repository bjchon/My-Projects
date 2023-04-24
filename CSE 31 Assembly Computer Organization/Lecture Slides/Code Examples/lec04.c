#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>
#include <string.h>

/* Title: Demo code for CSE 031 Lecture 04 (Fall 2021)
 * Author: Santosh Chandrasekhar
 */

int main() {

	int AR_SIZE = 10; // Single source of truth. Good programming practice (but often not followed).
	int ar[AR_SIZE]; // Cannot assume array elements will be initializd to 0. Printing content should produce junk.
	printf("Size of array: %lu\n", sizeof(ar)); // Size of ar = AR_SIZE * sizeof(int)
	printf("Contents of ar (using [] and pointer deferencing): \n");
	for (int i = 0; i < AR_SIZE; ++i) { 
		printf("%d %d\n", ar[i], *(ar + i)); // ar is nothing but a read-only pointer to the start of the array.
	}

	return 0;
}
