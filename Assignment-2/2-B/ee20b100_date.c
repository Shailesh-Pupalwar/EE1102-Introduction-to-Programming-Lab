#include <stdio.h>

int main()
{
    int num,n,count=0,i,rem;
    printf("Enter an integer in decimal number system\n");
    scanf("%d", &num);
    n=num;
    for (i=0;i<32;i++){
        rem=n%2;
        if(rem == 1){
            count=count+1;
        }
        
        n=n/2;
    }
    printf("Number of ones in %d decimal Number is: %d",num,count);
    return 0;
}