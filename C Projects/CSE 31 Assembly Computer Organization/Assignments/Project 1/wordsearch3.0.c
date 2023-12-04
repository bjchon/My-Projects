#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declarations of the two functions you will implement
// Feel free to declare any helper functions or global variables
void printPuzzle(char** arr);
void searchPuzzle(char** arr, char* word);
int bSize;

// Main function, DO NOT MODIFY 	
int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <puzzle file name>\n", argv[0]);
        return 2;
    }
    int i, j;
    FILE *fptr;

    // Open file for reading puzzle
    fptr = fopen(argv[1], "r");
    if (fptr == NULL) {
        printf("Cannot Open Puzzle File!\n");
        return 0;
    }

    // Read the size of the puzzle block
    fscanf(fptr, "%d\n", &bSize);
    
    // Allocate space for the puzzle block and the word to be searched
    char **block = (char**)malloc(bSize * sizeof(char*));
    char *word = (char*)malloc(20 * sizeof(char));

    // Read puzzle block into 2D arrays
    for(i = 0; i < bSize; i++) {
        *(block + i) = (char*)malloc(bSize * sizeof(char));
        for (j = 0; j < bSize - 1; ++j) {
            fscanf(fptr, "%c ", *(block + i) + j);            
        }
        fscanf(fptr, "%c \n", *(block + i) + j);
    }
    fclose(fptr);

    printf("Enter the word to search: ");
    scanf("%s", word);
    
    // Print out original puzzle grid
    printf("\nPrinting puzzle before search:\n");
    printPuzzle(block);
    
    // Call searchPuzzle to the word in the puzzle
    searchPuzzle(block, word);
    
    return 0;
}

void printPuzzle(char** arr) {
	// This function will print out the complete puzzle grid (arr). It must produce the output in the SAME format as the samples in the instructions.
    // Your implementation here...

    for (int i = 0; i < strlen(*(arr + 0)); ++i) 
        {
            for (int j = 0; j < strlen(*(arr + 0)); ++j) 
                printf("%c ", (*(arr+i)+0)[j]);
            
            printf("\n");
        }
    
    printf("\n");
}

void wordfinder(char** arr, char* word)
{

}

void searchPuzzle(char** arr, char* word) {
    // This function checks if arr contains the search word. If the word appears in arr, it will print out a message and the path as shown in 
    // the sample runs. If not found, it will print a different message as shown in the sample runs.
    // Your implementation here...


    int **array = (int**)malloc(strlen(*(arr + 0)) * sizeof(int*));
	for (int i = 0; i < strlen(*(arr + 0)); i++)
    	*(array+i) = (int*)malloc(strlen(*(arr + 0)) * sizeof(int));//allocates memory for each row

	for (int i = 0; i < strlen(*(arr + 0)); ++i)
        for (int j = 0; j < strlen(*(arr + 0)); ++j) 
            *(*(array+i) + j) = 0;// fills the initial values for array with zero's   

int count =0;
int found =0;
int i=0, j=0, k = 0;
int a =0 , b = 0, c =0;  

    for (int i = 0; i < strlen(*(arr + 0)); ++i)
        for (int j = 0; j < strlen(*(arr + 0)); ++j)  
                if(((word+0)[k] == (*(arr + i)+0)[j]) || ((word+0)[k]) == (*(arr + i)+0)[j] +32)

do
{
    for (i = 0; i < strlen(*(arr + 0)); ++i)
        {
            for (j = 0; j < strlen(*(arr + 0)); ++j)
                {               
                
                    int a =0 , b = 0, c =0;  
                  
                    if(((word+0)[k] == (*(arr + i)+0)[j]) || ((word+0)[k]) == (*(arr + i)+0)[j] +32)
                    {      
                           if(k+1==strlen((word+0)))
                            {
                                 *(*(array +i) + j) = 10*(*(*(array +i) + j)) + k +1;
                                    goto print;
                            }
                            *(*(array +i) + j) = 10*(*(*(array +i) + j)) + k +1;                                
         
                        begin:
                        
                                if(k+1==strlen((word+0)))
                                    goto print;
                                    
                
                        if(i+1<strlen(*(arr + 0)) && j>0)
                        {
                        if(((word+0)[k+1] == (*(arr + i+1)+0)[j-1]) || ((word+0)[k+1]) == (*(arr + i+1)+0)[j-1] +32)
                            {
                                *(*(array +i+1) + j-1) = 10*(*(*(array +i+1) + j-1)) + k +2;
                                if(k+1==strlen((word+0)))
                                    goto print;
                                k++;                        
                                count++;                        
                                i++;
                                j--;
                                a++;
                                b--;
                    
                                if(k+1==strlen((word+0)))
                                    goto print;
                                
                                    goto begin;
                                                
                             }
                        }
                        
                        if (i+1 < strlen(*(arr + 0)) && j>=0) 
                        {
                        if(((word+0)[k+1] == (*(arr + i+1)+0)[j]) || ((word+0)[k+1]) == (*(arr + i+1)+0)[j] +32)                                                
                            {
                                *(*(array +i+1) + j) = 10*(*(*(array +i+1) + j)) + k +2;
                                if(k+1==strlen((word+0)))
                                        goto print;   
                                k++;                        
                                i++;
                                a++;
                                count++;


                               if(k+1==strlen((word+0)))
                                        goto print;
                                    goto begin;
                                                      
                            }
                        }

                        if(i+1<strlen(*(arr + 0)) && j+1 < strlen(*(arr + 0)))
                        {
                        if(((word+0)[k+1] == (*(arr + i+1)+0)[j+1]) || ((word+0)[k+1]) == (*(arr + i+1)+0)[j+1] +32)                                                   
                            {
                                *(*(array +i+1) + j+1) = 10*(*(*(array +i+1) + j+1)) + k +2;
                                if(k+1==strlen((word+0)))
                                    goto print;
                                k++;
                        
                                i++;
                                j++;
                                a++;
                                b++;
                                count++;
     

                             if(k+1==strlen((word+0)))
                                        goto print;
                                     goto begin;
                                                                  
                            } 
                    }
                        
                        if(i+1<=strlen(*(arr +0)) && j+1<strlen(*(arr + 0)))
                        {
                        if(((word+0)[k+1] == (*(arr + i)+0)[j+1]) || ((word+0)[k+1]) == (*(arr + i)+0)[j+1] +32)
                            {
                                *(*(array +i) + j+1) = 10*(*(*(array +i) + j+1)) + k +2;
                                    if(k+1==strlen((word+0)))
                                        goto print;   
                                    k++;
                                    count++;
                                    j++;
                                    b++;
                                   if(k+1==strlen((word+0)))
                                        goto print;
                                     goto begin;
                               
                                        
                             }
                    }
                
                    if(j>0 && i>=0)
                    {
                        if(((word+0)[k+1] == (*(arr + i)+0)[j-1]) || ((word+0)[k+1]) == (*(arr + i)+0)[j-1] +32)
                            {
                                *(*(array +i) + j-1) = 10*(*(*(array +i) + j-1)) + k +2;
                                    if(k+1==strlen((word+0)))
                                        goto print;   
                                    k++;
                                    count++;
                                    j--;
                                    b--;
                         
                               if(k+1==strlen((word+0)))
                                        goto print;
                                     goto begin;
                           
                                         
                            }
                    }
                    if(i>0 && j>0)
                    {
                            if(((word+0)[k+1] == (*(arr + i -1)+0)[j-1]) || ((word+0)[k+1]) == (*(arr + i-1)+0)[j-1] +32)
                                {
                                    *(*(array +i-1) + j-1) = 10*(*(*(array +i-1) + j-1)) + k +2;
                                    if(k+1==strlen((word+0)))
                                        goto print;
                                     k++;
                                    count++;
                                    i--;
                                    a--;
                                    j--;
                                    b--;
                                    if(k+1==strlen((word+0)))
                                        goto print;
                                 
                                        goto begin;
                                  
                                }
                    }
                
                        if(i>0 && j>=0)
                        {
                            if(((word+0)[k+1] == (*(arr + i -1)+0)[j]) || ((word+0)[k+1]) == (*(arr + i -1)+0)[j] +32)
                                {
                                    *(*(array +i-1) + j) = 10*(*(*(array +i-1) + j)) + k +2;
                                    if(k+1==strlen((word+0)))
                                        goto print;
                                    k++;
                                    count++;
                                    i--;
                                    a--;
     
                                   if(k+1==strlen((word+0)))
                                        goto print;
                                        goto begin;
                                      
                                        
                                }
                        }

                    if(i>0 && j+1<strlen(*(arr + 0)))
                    {
                        if(((word+0)[k+1] == (*(arr + i-1)+0)[j+1]) || ((word+0)[k+1]) == (*(arr + i-1)+0)[j+1] +32)
                            {
                                *(*(array +i-1) + j+1) = 10*(*(*(array +i-1) + j+1)) + k +2;
                                if(k+1==strlen((word+0)))
                                    goto print;

                                 k++;
                                count++;
                                i--;
                                a--;
                                j++;
                                b++;
                        if(k+1==strlen((word+0)))
                                        goto print;
                                    goto begin;
                                                                    
                            }
                    }
                    if(i+1 == strlen((word +0)) && j+1 == strlen((word +0)))
                        goto wnf;
                        k = 0;
                       
                    i-=a;
                    j-=b;
                
                    for (int a = 0; a < strlen(*(arr + 0)); ++a)
                        for (int b = 0; b < strlen(*(arr + 0)); ++b) 
                             *(*(array+a) + b) = 0;
                    
                    }
            }
        }
        goto wnf;

} while(k < strlen((word+0)));
                    

print:
if(count==0)
    goto wnf;

 for (int i = 0; i < strlen(*(arr + 0)); ++i) 
	{
        for (int j = 0; j < strlen(*(arr + 0)); ++j) 
            printf("%d\t", *(*(array+i) + j));

        printf("\n");
    }
    printf("\n");

exit(0);

wnf: 
        printf("%s", "Word not found!\n");
}