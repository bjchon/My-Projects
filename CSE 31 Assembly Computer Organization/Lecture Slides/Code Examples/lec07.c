#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>
#include <string.h>

/* Title: Demo code for CSE 031 Lecture 07 (Fall 2021)
 * Author: Santosh Chandrasekhar
 */

typedef struct myStruct1
{
	char x;
	int y;
} point1;

typedef struct __attribute__((__packed__)) myStruct2 // To compress the structure (not recommended)
{
	int y;
	char x;
} point2;

int main() {

	printf("Size of point1: %lu\n", sizeof(point1));
	printf("Size of point2: %lu\n", sizeof(point2));

	point1 p;
	p.x = 'a';
	p.y = 1;

	point1 q = p;
	printf("\n");
	printf("p.x: %c, p.y: %d\n", p.x, p.y);
	printf("q.x: %c, q.y: %d\n", q.x, q.y);
	q.x = 'b';
	q.y = 2;
	printf("\n");
	printf("p.x: %c, p.y: %d\n", p.x, p.y);
	printf("q.x: %c, q.y: %d\n", q.x, q.y);
	
	printf("\n");

	int *p1, *p2, y;
	int c[4];
	p1 = (int *) malloc (sizeof(int));
	p2 = &y;
	*p1 = 1; // p1[0] would also work here
	printf("*p1: %u, p1: %p, &p1: %p\n", *p1, p1, &p1);
	*p2 = 2; // p2[0] would also work here
	printf("*p2: %u, p2: %p, &p2: %p\n", *p2, p2, &p2);
	*c = 3; // c[0] would also work here
	printf("*c: %u, c: %p, &c: %p\n", *c, c, &c); // Address of c is same as value of c
	return 0;
}
