// Write a program to convert a given string into lowercase..
#include<stdio.h>

int main(){
    char str[20];
    int i;
    printf("Enter a uppercase string\t");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
    {
        int n=str[i];
        printf("%c",n+32);
    }
return 0;
}