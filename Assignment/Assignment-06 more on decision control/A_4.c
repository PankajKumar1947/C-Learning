// Write a program to check a given alphabet is in uppercase or lowercase.
#include<stdio.h>

int main(){
    char ch;
    printf("Enter an alphabet\n");
    scanf("%c",&ch);
    int a=ch;
    if (a>=65&& a<=90)
     printf("Uppercase");
    else if (a>=97 && a<=122)
     printf("Lowercase");
    else
     printf("not an alphabet");
return 0;
}