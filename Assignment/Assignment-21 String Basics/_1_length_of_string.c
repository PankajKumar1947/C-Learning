// Write a program to calculate the length of the string(without using builtin method)
#include<stdio.h>
#include<string.h>

/*
int main(){
    int i;
    char str[20];
    printf("Enter an string\t");
    fgets(str,20,stdin);
    for(i =0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    printf("Length of the string %s is %d",str,i);
return 0;
}
*/

// built in method
int main(){
    int i;
    char str[20];
    printf("Enter an string\t");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    i=strlen(str);
    printf("Length of the string %s is %d",str,i);
return 0;
}
