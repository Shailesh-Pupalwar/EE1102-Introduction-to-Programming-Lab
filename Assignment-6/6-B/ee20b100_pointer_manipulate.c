#include <stdio.h> 
#include <string.h> 
int reverseString(char* str);
int main() 
{ 
	char str[200] ; 
	printf("Enter a string: \n");
	//scanf("%s",&*str);
	fgets(str, sizeof(str), stdin);
	char *ptr = str;
	reverseString(ptr); 
	printf("Reverse of the string: %s\n", str); 
	return 0; 
} 
int reverseString(char* str) 
{ 
	int l, i; 
	char *begin_ptr, *end_ptr, ch; 
	l = strlen(str); 
	begin_ptr = str; 
	end_ptr = str; 
	for (i = 0; i < l - 1; i++) 
		end_ptr++; 
	for (i = 0; i < l / 2; i++) { 
		ch = *end_ptr; 
		*end_ptr = *begin_ptr; 
		*begin_ptr = ch; 
		begin_ptr++; 
		end_ptr--; 
	} 
}