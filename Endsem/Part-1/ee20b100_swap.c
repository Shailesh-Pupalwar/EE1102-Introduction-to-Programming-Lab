#include<stdio.h>
#include<string.h>
hex_length(long a);
int main() {
long decimalNumber;
printf("Enter any decimal number: ");
scanf("%ld",&decimalNumber);
hex_length(decimalNumber);
return 0;
}

hex_length(long z)
{
    int remainder,quotient;
int i=1,j,temp;
char hexadecimalNumber[100];
quotient = z;
while(quotient!=0) {
temp = quotient % 16;
if( temp < 10)
          temp =temp + 48; else
        temp = temp + 55;
hexadecimalNumber[i++]= temp;
quotient = quotient / 16;
}
printf("Equivalent hexadecimal value of decimal number %ld: ",z);
for (j = i -1 ;j> 0;j--)
   printf("%c",hexadecimalNumber[j]);
        printf(strlen(hexadecimalNumber[j]));
}