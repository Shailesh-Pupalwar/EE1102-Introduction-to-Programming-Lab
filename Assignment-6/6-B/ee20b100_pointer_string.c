#include<stdio.h>

void swap(int *,int *);
int main()
{

    int Var1,Var2;
    printf("Input 1st number (Var1) : ");
    scanf("%d",&Var1);
    printf("Input 2nd number (Var2) : ");
    scanf("%d",&Var2);
    printf("Before swapping: Var1 = %d, Var2 = %d ",Var1,Var2);
    swap(&Var1,&Var2);
    printf("\nAfter swapping: Var1 = %d, Var2 = %d \n\n",Var1,Var2);
    return 0;
}

void swap(int *p,int *q)
{
    *p = *p -*q;
    *q = *p +*q;
    *p = *q -*p;
}