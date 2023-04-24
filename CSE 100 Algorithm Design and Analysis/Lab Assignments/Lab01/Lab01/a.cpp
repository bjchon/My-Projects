#include <iostream>

#define MAX_INT 2147483647

using namespace std;


int main(int argc,char **argv){

    int* Sequence;
    int arraySize = 1;
    int key, j;
    
    cin >> arraySize;
    Sequence = new int[arraySize];
    
    for(int i=0; i<arraySize; i++)
        cin >> Sequence[i];
        
        
    for(int i = 1; i < arraySize; i++)
   {
       key = Sequence[i];
       j = i - 1;
      
       while (j >= 0 && Sequence[j] > key)
       {
           Sequence[j + 1] = Sequence[j];
           j = j - 1;
       }
       Sequence[j + 1] = key;
  
   for(int j=0; j<=i; j++)
   {
   cout<<Sequence[j]<<";";
   }
       cout<<'\n';
   }

    delete[] Sequence;
    
}
