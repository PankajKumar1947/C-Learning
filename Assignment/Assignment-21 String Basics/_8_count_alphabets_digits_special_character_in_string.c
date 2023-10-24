// Write a program in C to count the total number of alphabets, digits and special characters in string...
#include<stdio.h>

int main(){
    char str[20];
    int countAlphabets=0,countDigits=0,i;
    printf("Enter a string\t");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        int n=str[i];
        if(n>=97 && n<=122)
         countAlphabets++;
        if(n>=48 && n<=57)
         countDigits++;
    }
    str[i-1]='\0';
    int j;
    for(j=0;str[j];j++);
    printf("Total numbers of alphbets , digits and other special characters is %d %d %d",countAlphabets,countDigits,j-(countAlphabets+countDigits));
return 0;
}