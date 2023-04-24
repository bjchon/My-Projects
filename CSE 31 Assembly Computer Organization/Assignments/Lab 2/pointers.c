#include <stdio.h>
int main() 
{
int x = 0, y = 0, *px, *py;
int arr[10] ={0};
printf("printer\n");
px = &x;
py = &y;
printf("%d\n,%d\n,%p\n,%p\n, %p\n,%p\n,", *px, *py, px, py, &x,&y);
for(x = 0; x <10; x++)
    {*(arr + x) = x;
    printf("%d\n", *(arr +x));
    }
printf("%p\n", arr);
return 0;
}