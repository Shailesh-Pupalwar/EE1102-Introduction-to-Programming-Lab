 #include <stdio.h>

int mystrlen(char *pointer);

int strcpyn(char *pointer , int n1);

int main()

{

    char name1[100];
    char name2[100];
    int count=0;
    int value,n1;

    printf("please choose the function which you need to perform: \n");
    printf(" 1. mystrlen \n");
    printf(" 2. strcpyn \n");
    printf(" 3. strcmpn \n");
    scanf("%d",&value);
    fgets(name1, sizeof(name1), stdin);  // read string
    if (value == 1){
        printf("Enter string1: \n");
        fgets(name1, sizeof(name1), stdin);  // read string
        char *ptr ;
        ptr=name1;
        mystrlen(ptr);
    }
    else if(value == 2){
        printf("please enter the string : ");
        fgets(name1, sizeof(name1), stdin);  // read string
        char *ptr, *ptr2 ;
        int count=0;
        ptr=name1;
        ptr2=name1;
        while(*ptr != '\0') {
            *ptr++;
            count=count+1;
        }
        printf("Enter the number of characters needs to be copied: \n");
        scanf("%d",&n1);
        if(count>=n1){
            strcpyn(ptr2 ,n1);    
        }
        else{
            printf("no of characters needs to be copied should be less than or equal to length of the string : %d",count);
        }
       
    }
    else if(value==3){
        printf("Enter string1: ");
        fgets(name1, sizeof(name1), stdin);  // read string
        printf("Enter string2: ");
        fgets(name2, sizeof(name2), stdin);  // read string
        char *ptr1,*ptr2 ;
        ptr1=name1;
        ptr2=name2;
        printf("Enter the number of characters  to be compared: \n");
        scanf("%d",&n1);
        strcmpnn(ptr1,ptr2,n1);
    }
    else{
        printf("please enter the valid inputs mentioned above only");
    }
   
    return 0;
}

int strcmpnn(char *pointer1,char *pointer2,int num){
    int i;
    int count=0;
    char *str1[100];
    char *str2[100];
    for (i=0;i<num;i++){
        str1[i]=*(pointer1+i);
        printf("%c", *(pointer1+i));
    }
    printf("\n");
    for (i=0;i<num;i++){
        str2[i]=*(pointer2+i);
        printf("%c", *(pointer2+i));
    }
    printf("\n");
    for (i=0;i<num;i++){
        if (*(str1+i)==*(str2+i)){
            count=count+1;
        }
    }
    if (count==num){
        printf("Output is 1");
    }
    else{
        printf("Output is 0");
    }
}

int mystrlen(char *pointer) {
    int count=0;
    while(*pointer != '\0') {
        *pointer++;
        count=count+1;
    }
    printf("The length of the string is : %d \n",count-1);
    return count;
}

int strcpyn(char *pointer , int n1) {
    int i;
    char s[1000];
    printf("The characters copied to the second pointer is \n");
    for (i=0;i<n1;i++){
        s[i]=*(pointer+i);
        printf("%c", *(pointer+i));
    }
}