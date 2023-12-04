#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>
#include <string.h>

/* Title: Demo code for CSE 031 Lecture 06 (Fall 2021)
 * Author: Santosh Chandrasekhar
 */

#ifndef SIZE
#define SIZE 20
#endif

int main() {
	int i, x = 11;

	char* str;	// Most common way of creating a string
	str = "abc";
	printf("str: %s, length of str: %lu\n", str, strlen(str));

	// Using arrays to create strings to demonstrate the importance of the null terminating charater (can do the same with pointers too).
	char s1[4]; // To store a 3-character string, create an array of size 4, not 3, to have space for the null terminating character
	s1[0] = 'b';
	s1[1] = 'c'; 
	s1[2] = 'd';
	s1[3] = '\0'; // Store the null terminating character at the last location (without this, you may see odd printing behavior as shown with s2)
	printf("s1: %s, length of s1: %lu\n", s1, strlen(s1));	
	
	s1[1] = '\0'; // This will cut the string to just 'b' even though s1[2] ='d'
	printf("s1: %s, length of s1: %lu\n", s1, strlen(s1));	

	char s2[3]; // Intentionally done to demonstrate what happens when we forget the null terminating character
	s2[0] = 'b';
	s2[1] = 'c'; 
	s2[2] = 'd'; // Notice now that we did not place \0 in the end
	printf("s2: %s, length of s2: %lu\n", s2, strlen(s2)); // Should see the odd things printed (sometimes)

	printf("\n");
	printf("Charaters and their locations for string str: \n");
	for(i = 0; i < 4; i++)
		printf("character: %c \t at address: %p\n", str[i], str + i); // Or use *(str + i) instead of str[i]

	printf("\n");

	int *ar, br[SIZE]; // SIZE = 20
	ar = (int *) malloc(SIZE * sizeof(int));
	printf("size of ar[]: %lu, size of br[]: %lu\n", sizeof(ar), sizeof(br)); // ar's size is the size of an address in bytes
																			  // br's size is 20*(sizeof(int))
	printf("ar[] (malloc): ");
	for(i = 0; i < SIZE; i++) printf("%d ", ar[i]); // Should print junk (not initialized)
	printf("\n");
	printf("br[] (array): ");
	for(i = 0; i < SIZE; i++) printf("%d ", br[i]); // Should print junk (not initialized)
	
	printf("\n\n");
	
	int *arr = (int*) malloc(SIZE * sizeof(int)); 
	for(i = 0; i < SIZE; ++i) arr[i] = i; // Initialize arr
	printf("arr[] (malloc): ");
	for(i = 0; i < SIZE; i++) printf("%d ", arr[i]); // Print arr's contents
	printf("\n");
	
    free(arr); // Release and free the memory pointed by arr
    //free(arr); // Uncomment at your own risk. This should cause unexpected behavior.

    arr = &x; // arr is not destroyed after freeing. It is just a pointer, so it can now be made to point to something else
    printf("arr: %d\n", arr[0]); // Or use *a, or *(a + 0) instead of a[0]

    int* k = (int*) malloc(SIZE * sizeof(int)); // Dynamically allocate memory to aother pointer
    printf("k[] (re-malloc): ");
    for(i = 0; i < SIZE; i++) printf("%d ", k[i]); // Might see "left-over" values that were initialized in line 51
	printf("\n");
	
	return 0;
}
