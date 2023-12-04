#include <stdio.h>

/* Title: Demo code for CSE 031 Lecture 03 (Fall 2021)
 * Author: Santosh Chandrasekhar
 * 
 *
 * This program produces 3 warnings during compilation, but will run despite the warnings.
 * This program can be made to crash if some lines are uncommented (see textual comments in code below).
 */

int main() {
	int *ptr, x = 3;
	ptr = &x; // ptr now points to x.
	printf("x = %d\n", x); // Value of x.
	printf("&x = %p\n", &x); // Address of x.
	printf("*ptr = %d\n", *ptr); // Getting the value of x by dereferencing the pointer to x.
	printf("ptr = %p\n", ptr); // Value stored in pointer (address of x).
	*ptr = 5; // Manipulating value of x using the pointer. Same as x = 5; 
	printf("*ptr = %d\n", *ptr); // Getting the new value of x by dereferencing the pointer to x.
	printf("x = %d\n", x); // Verify that x's value indeed changed to 5.
	printf("&ptr = %p\n", &ptr); // Pointers themselves have an address!
	printf("\n");

 	// int *t = 5; // Meaningless. Might crash your code at runtime if uncommented
    //printf("*t = %d\n", *t); // Meaningless. Will crash code. Uncomment at own risk
	// printf("\n");

	float f = 1.2; 
	float *fptr = &f; // A float pointer is only meant to point to a float data type
	char chr = 'A';
	printf("*fptr = %f\n", *fptr); 
	fptr = &chr; // Float pointer can be made to point to a char variable, but this will produce a warning
	printf("*fptr = %f\n", *fptr); // Meaningless
	void *vptr; // A void pointer can be made to point to anything.
	vptr = &f; // Here a void pointer is made to point to a float
	printf("%f\n", *((float *)vptr)) ; // Need to first cast a void pointer to a float pointer before dereferencing it as a float
	vptr = &chr; // Here a void pointer is made to point to a char
	printf("%c\n", *((char *)vptr)); // Here we need to cast the same void pointer to a char pointer before dereferencing it as a char
	printf("\n");

	int i, y = 11;
	int *p = y; // In-valid and will produce warning during compile time.
	int *q = (int *) y; // Valid but will produce warning during compile time.
	printf("y: %d, p: %p, q: %p\n", y, p, q); 
	//printf("*p: %d\n", *p); // Might crash the program if y is not a "valid" address. Uncomment at your own risk.

	return 0;
}
