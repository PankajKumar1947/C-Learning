// Write a program to finc first occurence of a given character in a given string..
#include<stdio.h>

int main(){
    char str[20];
    char character;
    int i;
    printf("Enter a string and character\t");
    fgets(str,20,stdin);
    fflush(stdin);
    scanf("%c",&character);
    for(i=0;str[i];i++)
     if(str[i]==character)
     break;
     if(str[i]==0)
     printf("%c not found in %s",character,str);
     else
    printf("%c first occur at index %d in %s",character,i,str);
return 0;
}