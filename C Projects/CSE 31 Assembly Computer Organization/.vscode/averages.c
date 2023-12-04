#include <stdio.h>
int main()
{
    int x, y, countodd, counteven, input, oddavg, evenavg;
    printf("Please enter an integer: \n");
    scanf("%d", &input);

while (input !=0)
{
if (input % 2 == 0)
{
 x= x+input;
 counteven ++;
}
 else
     y=y+input;
     countodd ++;

}
   oddavg = x/countodd;
   evenavg = y/counteven;
   printf("Average of even numbers: %d", evenavg);
    printf("Average of odd numbers: %d", oddavg);

return 0;
}