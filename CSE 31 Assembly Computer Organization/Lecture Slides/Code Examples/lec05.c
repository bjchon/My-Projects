#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>
#include <string.h>

/* Title: Demo code for CSE 031 Lecture 05 (Fall 2021)
 * Author: Santosh Chandrasekhar
 */

int main() {

	int *p = (int *) malloc (5 * sizeof(int)); // Dynamically create array of size 5
	for (int i = 0; i < 5; ++i) *(p + i) = 2*i; // Intialize array
	printf("Contents of p[]: ");
	for (int i = 0; i < 5; ++i) printf("%d ", *(p+i));
	printf("\n\n");
	
	int x;
	int *q = p; // Remember where p points to at the start (we'll be resetting p later)
	
	// See Slide 5 of Lecture 05 for meaning of what these commands do.
	x = *(p + 1); printf("x = *(p + 1): %d,\t p: %p\n", x, p); 
	x = *p + 1; printf("x = *p + 1: %d,\t p: %p\n", x, p);
	x = (*p)++; printf("x = (*p)++: %d,\t p: %p\n", x, p); // Changes content of array at index 0
	x = *p++; printf("x = *p++: %d,\t p: %p\n", x, p);
	x = *(p)++; printf("x = *(p)++: %d,\t p: %p\n", x, p);
	x = *++p; printf("x = *++p: %d,\t p: %p\n", x, p);
	x = ++*p; printf("x = ++*p: %d,\t p: %p\n", x, p); // Changes content of array at index 3

	p = q;	// Reset p to point to the beginning
	printf("\n Contents of p[]: ");
	for (int i = 0; i < 5; ++i) printf("%d ", *(p+i));
	printf("\n");

	return 0;
}
