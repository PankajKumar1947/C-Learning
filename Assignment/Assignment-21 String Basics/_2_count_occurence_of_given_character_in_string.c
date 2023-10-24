// Write a program to count the occurence of given character in given string..
#include<stdio.h>

int main(){
    char str[20],character;
    int count =0;
    printf("Enter a string and character    ");
    fgets(str,20,stdin);
    fflush(stdin);
    scanf("%c",&character);
    for(int i=0;str[i];i++)
    if(str[i]==character)
     count++;
    printf("'%c' has occured %d times in %s",character,count,str);
return 0;
}