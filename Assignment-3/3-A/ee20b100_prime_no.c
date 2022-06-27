#include <stdio.h>
#include <math.h>

int main()
{
   float A,B,C,D,roots,root1,root2;
   
   printf("please enter value of the co efficient of x^2");
   scanf("%f",&A);
   
   printf("please enter the value of the co efficient of x");
   scanf("%f",&B);
   
   printf("please enter the value of the constant");
   scanf("%f",&C);
   
   //f(x)=Ax*x+bx+c;
   
   D= B*B-4*A*C;
   
   if (D==0)
   {
    roots = -B/2*A;
    printf("The roots of the equation f(x) when D=0 are equal and are given by : %f",roots);
   
   }
   
   else if (D>0)
   {
       root1 = (-B+sqrt(D))/2*A;
       root2= (-B-sqrt(D))/2*A;
       printf("The roots of the equation f(x) when D>0 are real and distinct and are given by : %f, %f",root1,root2);
   }
    else if (D<0)
    {
        root1 = (-B)/2*A
        root2= (sqrt(-D))/2*A;
        
        printf("One of root of the equation f(x) when D<0 is imaginary and is given by : %f + %f i \n", root1, root2);
        printf("Other root of the equation f(x) when D<0 is imaginary and is given by : %f - %f i", root1, root2);
        
    }
    
    return 0;
}