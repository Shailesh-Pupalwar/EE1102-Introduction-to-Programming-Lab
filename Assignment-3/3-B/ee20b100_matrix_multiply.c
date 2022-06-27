#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],v;
    printf("Input a valid string to convert to integer\n");
    scanf("%s", a);
    int i,c,len,sign, s1,s2,dec=0,A,n=0,n1=0,n2=0;

    if (a[0] == '-') {  // Handle negative integers
        sign = -1;
    }

    if (sign == -1) {  // Set starting position to convert
        A = 1;
    }
    else {
        A = 0;
    }
    len=strlen(a);
    printf("%d \n",len);
    for (i=0;i<=len;i++){
        v=a[i];
        printf("%c \n",v);
        if(a[i]=='.'){
            printf("yes i am in");
            dec=1;
            s1=i;
           
        }
    }
    printf("%d \n",dec);
    switch(dec)
    {
        case 0:
           
            for (c = A; a[c] != '\0'; c++) {
                n = n * 10 + a[c] - '0';
            }
       
            if (sign == -1) {
                n = -n;
            }
            printf("number is %d \n",n);
            break;
       
        case 1:
            for (c = A; c<s1; c++) {
                n1 = n1 * 10 + a[c] - '0';
            }
            printf("%d \n",n1);
            s2=s1-len;
            for (c=-1;c!=s2;c--){
                n2=n2*0.1 +a[c] - '0';
            }
            printf("%d \n",n2);
            n=n1;
            //n=n1+n2;
           
            if (sign == -1) {
                n = -n;
            }
            printf("number is %d",n);
            break;
    }
    return 0;
}
