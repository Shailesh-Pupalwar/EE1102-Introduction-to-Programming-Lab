#include<stdio.h>    
int main(){  
int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;    
printf("enter the number of row for matrix A=");    
scanf("%d",&r1);    
printf("enter the number of column for matrix A=");    
scanf("%d",&c1);    
printf("enter the first matrix element=\n");    
for(i=0;i<r1;i++)    
{    
    for(j=0;j<c1;j++)    
    {    
    scanf("%d",&a[i][j]);    
    }    
}
printf("enter the number of row for matrix B and make sure you are entering the same number of cloumns of matrix A \n");    
scanf("%d",&r2);
if (r2 == c1){
    printf("enter the number of column for matrix B=");    
    scanf("%d",&c2);
    printf("enter the second matrix element=\n");    
    for(i=0;i<r2;i++)    
    {    
        for(j=0;j<c2;j++)    
        {    
        scanf("%d",&b[i][j]);    
        }    
    }    
    printf("multiply of the matrix=\n");    
    for(i=0;i<r1;i++)    
    {    
        for(j=0;j<c2;j++)    
        {    
        mul[i][j]=0;    
            for(k=0;k<c1;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
    //for printing result    
    for(i=0;i<r1;i++)    
    {    
        for(j=0;j<c2;j++)    
        {    
            printf("%d\t",mul[i][j]);    
        }    
    printf("\n");    
    }    
}
else{
    printf("The number of rows for matrix B and number of cloumns of matrix A are not equal, we cannot proceed for matrix multiplication");
}
    return 0;  
}