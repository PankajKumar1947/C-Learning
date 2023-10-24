//Q2. Write a function to trim a string(removing leading spaces from both ends).
#include<stdio.h>
#include<string.h>
char* triming_leading_spaces(char str[]);

int main()
{
    char string[50];
    printf("Enter a string: \n");
    fgets(string,50,stdin);
    string[strlen(string)-1]='\0';
    printf("%s",triming_leading_spaces(string));
    printf("Hello");
    return 0;
}

char* triming_leading_spaces(char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
       count++;
    k=strlen(str);
    while(str[i]==' ')
      i++;
    for(j=0;str[j+1];j++)
       str[j]=str[i+j];
    str[k-count-i]='\0';
    return str;
}