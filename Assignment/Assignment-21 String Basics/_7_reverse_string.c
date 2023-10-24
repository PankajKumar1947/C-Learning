// Write a program to reverse a string..
#include<stdio.h>

int main(){
    char str[20];
    int i;
    printf("Enter a string\t");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(int j=i;j>=0;j--)
    printf("%c",str[j]);
return 0;
}