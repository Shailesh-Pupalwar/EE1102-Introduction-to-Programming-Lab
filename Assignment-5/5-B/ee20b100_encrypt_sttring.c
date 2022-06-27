#include <stdio.h>
#include <stdlib.h>

float average(int n, float a[])
{
    int i;
    float avg, sum=0;
    for(i=0;i<n;++i)
    {
        sum+= a[i];
    }
    avg = sum/n;
    return avg;
}

int main()
{
    int n,i;
    float avg,*p;
    printf("Enter number of students: ");
    scanf("%d",&n);
    p=(float*)malloc(n * sizeof(int));
    printf("Enter marks:\n");
    for(i=0;i<n;++i)
    {
      scanf("%f",(p+i));
    }
    avg = average (n,p);
    printf("Average is %.2f\n", avg);
    if (avg >= 85.00 )
    printf("your grade is 'A' ");
    else if ( avg<85.0 && avg >= 70 )
    printf("your grade is 'B' ");
    else if ( avg<70.0 && avg >= 50 )
    printf("your grade is 'C' ");
    else if ( avg<50.0  )
    printf("your grade is 'D' ");
    free(p);
    
    return 0;
}