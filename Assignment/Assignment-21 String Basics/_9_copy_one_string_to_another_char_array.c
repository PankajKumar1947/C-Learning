// Write a program in C to copy one string to another char array..
#include<stdio.h>
#include<string.h>

int main(){
    char str1[20];
    char str2[10];
    int i;
    printf("Enter first string\t");
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    for(i=0;str1[i];i++)
    str2[i]=str1[i];
    str2[i]='\0';
    printf("\nNew string is %s",str2);
return 0;
}