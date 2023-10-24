// Write a program to count vowels in a given string..
#include<stdio.h>

int main(){
    char vowels[]="aeiouAEIOU";
    char str[20];
    int i,j,count=0;
    printf("Enter an string     ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    for(int j=0;vowels[j];j++)
    if(str[i]==vowels[j])
    count++;
    printf("Numbers of vowels in given string %s is %d",str,count);
return 0;
}