/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch,str1[100],rev[100];
    int c,i,j,len;
    printf("enter the string ");
    gets(str1);
    len=strlen(str1);
    for (i=0;i<len;i++)
    {
        //=='0'||str1[i]=='1'||str1[i]=='2'||str1[i]=='3'||str1[i]=='5'||str1[i]=='6'||str1[i]=='7'||str1[i]=='8'||str1[i]=='9'
        if(str1[i]=='0')
        {
            str1[i]='9';
        }
        else if(str1[i]=='1')
        {
            str1[i]='8';
        }
        else if(str1[i]=='2')
        {
            str1[i]='7';
        }
        else if(str1[i]=='3')
        {
            str1[i]='6';
        }
        else if(str1[i]=='4')
        {
            str1[i]='5';
        }
        else if(str1[i]=='5')
        {
            str1[i]='4';
        }
        else if(str1[i]=='6')
        {
            str1[i]='3';
        }
        else if(str1[i]=='7')
        {
            str1[i]='2';
        }
        else if(str1[i]=='8')
        {
            str1[i]='1';
        }
        else if(str1[i]=='9')
        {
            str1[i]='0';
        }
        else if(str1[i]>=65 && str1[i]<=90)
        {
            str1[i]=str1[i]+32;
        }
        else if(str1[i]>=97 && str1[i]<=122)
        {
            str1[i]=str1[i]-32;
        }
        else if(str1[i]==' ')
        {
            str1[i]='$';
        }
        else if(str1[i]=='$')
        {
            str1[i]=' ';
        }
        //change '+' to '/', '-' to '*', '*' to '-', and '/' to '+'
        else if(str1[i] == '+'){
            str1[i]='/';
        }
        else if(str1[i] == '-'){
            str1[i]='*';
        }
        else if(str1[i] == '*'){
            str1[i]='-';
        }
        else if(str1[i] == '/'){
            str1[i]='+';
        }
        else
        {
            continue;
        }
    }
    //printf("final string is %s \n",str1);
    j=len-1;
    for (i = 0; i < len; ++i)
    {
        rev[i] = str1[j];
        j--;
    }
    printf("\nString After Reverse: %s ", rev);
    return 0;
}