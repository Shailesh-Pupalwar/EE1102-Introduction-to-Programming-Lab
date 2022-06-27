#include <stdio.h>
int main()
{
    long int N,K, NcK;
    
    printf("please enter the value of N");
    scanf("%ld", &N );
    printf("please enter the value of K");
    scanf("%ld", &K );
    int i,d,m;
    long int Output=1, factor1 = 1, factor2=1,factor3=1;
    d=N-K;
    m=N-K;
    if (N>=K)
    {
        for (i=d;i>1;i--)
        {
           factor3=factor3*d;
           d=d-1;
        }
        while(m!=0){
            Output=Output*N;
            N=N-1;
            m=m-1;
        }
    }
    else 
    {
        printf("N should be always greater than or equal to K");
    }
    NcK=Output/(factor3);
    printf("The value of NcK is %ld", NcK);
    return 0;
}