
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	
	// Insert extra code here
	printf("The value of head %d\n", head);
    printf("The value of *head %d\n", *head);
	printf("The address of head %d\n", &head);
    printf("The address of iValue %d\n", &head->iValue);
    printf("The address of fValue %d\n", &head->fValue);
    printf("The address of next %d\n", &head->next);

	return 0;
}