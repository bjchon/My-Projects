#include <stdio.h>
int main()
{
    int x,y, count =1;
    printf("Enter the number of repetitions for the punishment phrase: ");
    scanf("%d", &x);
    while(x<=0)
    {
        printf("You entered an invalid value for the number of repetitions! \n");
        printf("Enter the number of repetitions for the punishment phrase again: ");
        scanf("%d", &x);
    }

    printf("\nEnter the repetition count when you wish to introduce a typo: ");
    scanf("%d", &y);
    while(y<=0)
    {
        printf("You entered an invalid value for the typo placement!\n");
        printf("Enter the repetition count when you to introduce a typo again: ");
        scanf("%d", &y);
    }
    while (x>0)
    {
        if (count == y)
        {
            printf("\nC programming languoge is the bezt!");
        }
        if(count != y)
        printf("\nC programming language is the best!");
        --x;
        ++count;
    }
    return 0;
}
