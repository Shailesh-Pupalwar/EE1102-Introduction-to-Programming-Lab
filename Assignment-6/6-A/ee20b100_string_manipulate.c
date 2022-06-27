#include <stdio.h> 
#include <string.h> 
int char_count(char *ptr);
int is_vowel(char *ptr);
int is_consonant(char *ptr);

int main() 
{ 
	char str[100] ; 
	printf("Enter a string: \n");
	fgets(str, sizeof(str), stdin);
	char *ptr = str;
	char_count(ptr);
	return 0; 
}

int char_count(char *ptr){
    int c1,c2,c3,c4;
    c4=strlen(ptr);
    c1=is_vowel(ptr);
    c2=is_consonant(ptr);
    c3=c4-(c1+c2)-1;
    printf("the count of vowels in the string is :  %d \n",c1);
    printf("the count of consonants in the string is :  %d \n",c2);
    printf("the count of special charecters in the string is :  %d \n",c3);
}

int is_vowel(char *ptr)
{
    int count1=0;
	while(*ptr != '\0') 
	{
        if(*ptr == 'a' || *ptr =='e' || *ptr =='i' || *ptr =='o' || *ptr =='u' || *ptr =='A' || *ptr =='E' || *ptr =='I' || *ptr =='O' || *ptr =='U'){
            count1=count1+1;
        }
        ptr++;
        
    }
    return count1;
}
int is_consonant(char *ptr)
{
    int count2=0;
    while(*ptr != '\0') {
        if (*ptr == 'b' || *ptr =='c' || *ptr =='d' || *ptr =='f' || *ptr =='g' || *ptr =='h' || *ptr =='j' || *ptr =='k' || *ptr =='l' || *ptr =='m' || *ptr == 'n' || *ptr =='p' || *ptr =='q' || *ptr =='r' || *ptr =='s' || *ptr =='t' || *ptr =='v' || *ptr =='w' || *ptr =='x' || *ptr =='y' || *ptr =='z')
        {
            count2=count2+1;
        }
        else if (*ptr == 'B' || *ptr =='C' || *ptr =='D' || *ptr =='F' || *ptr =='G' || *ptr =='H' || *ptr =='J' || *ptr =='K' || *ptr =='L' || *ptr =='M' || *ptr == 'N' || *ptr =='P' || *ptr =='Q' || *ptr =='R' || *ptr =='S' || *ptr =='T' || *ptr =='V' || *ptr =='W' || *ptr =='X' || *ptr =='Y' || *ptr =='Z')
        {
            count2=count2+1;
        }
        ptr++;
    }
    return count2;
}