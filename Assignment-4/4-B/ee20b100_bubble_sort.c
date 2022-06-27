#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[17];
    long long decimal, place;
    int a[100],i = 0, val, len,count=0,stringlen;
    decimal = 0;
    place = 1;
    printf("Enter any hexadecimal number: ");
    gets(hex);
    stringlen = strlen(hex);
    len=stringlen-1;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
            count=count+1;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
            count=count+1;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
            count=count+1;
        }
        else{
            //printf("doing nothing");
        }
        decimal += val * pow(16, len);
        len--;
    }
    if(count==stringlen)
    {
        printf("Hexadecimal number = %s\n", hex);
        printf("Decimal number = %lld \n", decimal);
       
        for(i=0;decimal>0;i++)    
        {    
            a[i]=decimal%2;    
            decimal=decimal/2;    
        }
        printf("\nBinary of Given Number is=");
        for(i=i-1;i>=0;i--)    
        {    
            printf("%d",a[i]);    
        }
    }
    else{
        printf("entered Hexadecimal value is not valid");
    }
    return 0;
}