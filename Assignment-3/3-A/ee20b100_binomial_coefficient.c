
Assignment 3-B
Ramya Balachandran IITM
•
Feb 16, 2021
10/50
10 points out of possible 50
Due Feb 19, 2021, 6:00 PM

Assignment 3-B
Google Docs
Class comments
Your work
Graded

EE20B100_sum_of_series.c
C

EE20B100_matrix_multiply.c
C
Private comments
Assignment 3-B
#include <stdio.h>

int main()
{
   float a,sum=0;
  
   
   printf("enter the value of a");
   scanf("%f", &a);
   
   if(a>0)
   {
        while(a != 0)
        {
            sum = sum+(1/a);
            a=a-1;
        }
        printf("sum is %f",sum);
   }
   
   else if (a<0)
   {
        while(a != 0)
        {
            sum = sum+(1/a);
            a=a+1;  
        }
        printf("sum is %f",sum);
   }
   
   else 
   {
        printf(" value is not valid");   
   }

    return 0;
}