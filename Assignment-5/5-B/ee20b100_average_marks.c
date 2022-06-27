/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial(int d);
int main()
{
    int a=0,i,f,s;
    
    while(a<=3 && a>=0){
        printf("please enter any integers from 0 to 3: ");
        scanf("%d",&a);
        if(a<=3 && a>=0){
            if (a==1){
                printf("you have choosen the first option from the menu, factorial \n");
                printf("please enter the number you want to get the factorial and the no should be greater than 0 and less than 10 \n");
                scanf("%d",&f);
                factorial(f);
            }
            else if(a==2)
            {
                printf("you have choosen the second option from the menu, square of a number \n");
                printf("please enter the number you want to get the square of a number \n");
                scanf("%d",&f);
                s= (f*f);
                printf("The square of a %d is %d \n", f, s);
            }
            else if(a==3){
                printf("you have choosen the third option from the menu, cube of a number \n");
                printf("please enter the number you want to get the cube of a number \n");
                scanf("%d",&f);
                s= (f*f*f);
                printf("The cube of a %d is %d \n", f, s);
            }
            else {
                break;
            } 
        }
        else{
            printf("you have entered the wrong option, please choose the only mentioned options. \n");
        }
        
    }
    return 0;
}
    
int factorial(int d) {
    int i;
    int fact =1;
    if (d>0 && d<10){
        for (i = 1; i <= d; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d \n", d, fact);
        return fact;
    }
    else{
        printf("please enter the number between 0 and 10 \n");
    }
    
}