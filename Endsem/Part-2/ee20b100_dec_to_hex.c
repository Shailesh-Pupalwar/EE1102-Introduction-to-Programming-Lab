#include<stdio.h>

char* StrCompress(char myStr[])
{
    char *s = myStr;
    char *r, *p;
    int count, i;

    while (*s)
    {
        count = 1;
        while (*s && *s == *(s+1))
        {
            count++;
            s++;
        }

        if (count > 1)
        {
            *(s - count + 2) = count + '0';
            for (i = 0; i < count - 2; i++)
            {
                p = s + 1;
                r = s;

                while (*r)
                    *r++ = *p++;

                s--;
            }
        }
        s++;
    }

    return myStr;
}

int main()
{
    char myStr[40] ;
   
    printf("please enter the string");
    scanf("%s",&myStr);

    printf("Compressed String is : %s\n", StrCompress(myStr));

    return 0;

}