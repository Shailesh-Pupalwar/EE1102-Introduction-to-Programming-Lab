#include <stdio.h>

int main()
{
    int n,m,count=0;
    
    printf("please enter the value of n ");
    scanf("%d",&n);
    if (n<0) 
    {
        n=-n;
    }
    m=n/2;
    
    while(m>=2){
        if (n%m == 0){
            
            printf("number is not prime");
            count=count+1;
            break;
            
        }
        m=m-1;
        
    }

  if(count==0){
      printf("number is prime");
  } 
}