#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    char s12[200];
    int i,length1 = 0,length2 = 0;
    
    printf("Please enter the string 1:");
    gets(s1);
    
    printf("Please enter the string 2:");
    gets(s2);
    
    //Getting the length of string1
    while (s1[length1] != '\0')
    {
        length1++;
    }
    
    //Getting the length of string2
    while (s2[length2] != '\0')
    {
        length2++;
    }
    
    //Assigning the values to s12
    for(i=0;i<length1;i++)
    {
        s12[i]=s1[i];
    }
    
    s12[length1]=' ';
    
    //concatenating two strings
    for(i=length1+1;i<=(length1+length2);i++){
        s12[i]=s2[i-(length1+1)];
    }
    
    printf("printing the final string after the concat : %s",s12);

    return 0;
}