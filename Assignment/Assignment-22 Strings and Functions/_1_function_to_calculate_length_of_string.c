// Write a function to calculate length of the string..
#include<stdio.h>
int length_string(char []);

int main(){
    char str[20];
    printf("Enter a string\t");
    fgets(str,20,stdin);
    int k=length_string(str);
    printf("Length of string %s is %d ",str,k);
return 0;
}

int length_string(char s[])
{
    int i;
    for(i=0;s[i];i++);
    s[i-1]='\0';
    for(i=0;s[i];i++);
    return i;
}