#include <stdio.h>

int main()

{

    int a,b,c;
    int i,A[3], B[3];
    
    
    // giving the values of the components of vector1
    for (i=0;i<=2;i++)
    {
        printf("please print the %d element of vector1 : \n",i+1);
        scanf("%d",&A[i]);
    }
    
    
    // giving the values of the components of vector2
    for (i=0;i<=2;i++)
    {
        printf("please print the %d element of vector2 : \n",i+1);
        scanf("%d",&B[i]);
    }
    
    
    // just mentioned the formula of the components of the required vector 
    a=(A[1]*B[2]) - (A[2]*B[1]);
    b=(A[2]*B[0]) - (A[0]*B[2]);
    c=(A[0]*B[1]) - (A[1]*B[0]);
    
    
    printf("the values of cross product is : (%d)i + (%d)j +(%d)k \n",a,b,c);
    
    return 0;
}