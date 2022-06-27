#include <stdio.h>

int main() 

{    

  int myArray[ ] = {1,24,17,4,-5,100};
  int *ptr;
  ptr = &myArray[0];

  int a = sizeof(myArray)/sizeof(myArray[0]);

  for(int i = 0; i < a; i++)
  { 
    printf("%d\n",*(ptr+i)); 
  }
  
  return 0; 
}