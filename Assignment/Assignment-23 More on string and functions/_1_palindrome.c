//Q1. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int palindrome(char *str);

int main(){
    char string[50];
    printf("Enter a string:\n");
    fgets(string,50,stdin);
    if(palindrome(string)==1)
      printf("Entered string is palindrome.");
    else
     printf("Entered string is not a palindrome.");
    return 0;
}
int palindrome(char *str)
{
    int l;
    str[strlen(str)-1]='\0';
    l=strlen(str);
    int i;
    for(i=0;str[i];i++)
        if(str[i]!=str[l-i-1])
         return 0;
    return 1;
}