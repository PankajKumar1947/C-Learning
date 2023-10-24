// Write a program to count spaces in given string..
#include<stdio.h>

int main(){
    char str[20];
    int count=0;
    printf("Enter an string\t");
    fgets(str,20,stdin);
    for(int i=0;str[i];i++)
    if(str[i]==' ')
     count++;
     printf("The number of spaces in %s is %d",str,count);
return 0;
}