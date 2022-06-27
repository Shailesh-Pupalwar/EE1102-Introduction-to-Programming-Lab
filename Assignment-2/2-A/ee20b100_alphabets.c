#include <stdio.h>

int main()
{
    int num,value,sum= 0,count,number,rem,queotient,value1;
    printf("Please enter the value:");
    scanf("%d",&num);
    value=num;
    while(num != 0)
    {
        num=num/10;
        sum= sum+1;
    }
    printf("Number of digits: %d \n", sum);
    if(sum % 2 == 0)
    {
        for(count = 0; count < sum; count=count+2)
        {
            printf("value : %d \n",value);
            rem=value%100;
            value1=value/100;
            printf("rem : %d \n",rem);
            queotient=rem/10;
            printf("even number is %d \n",queotient);
            value=value1;
        }
    }
    else
    {
        for(count = 1; count < sum; count=count+2)
        {
            printf("value : %d \n",value);
            rem=value%100;
            value1=value/100;
            printf("rem : %d \n",rem);
            queotient=rem/10;
            printf("even number is %d \n",queotient);
            value=value1;
        }
    }
    return 0;
}