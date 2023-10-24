// Write a program to check whether a given character is an alphabet(uppercase) ,an alphabet(lowercase), a digit or a special character.
#include<stdio.h>

int main(){
    char ch;
    printf("Enter an alphabet\n");
    scanf("%c",&ch);
    int a=ch;
    if (a>=65&& a<=90)
     printf("alphabet(Uppercase)");// ASCII value of lowercase alphabets – 97 to 122.
    else if (a>=97 && a<=122)
     printf("alphabet(Lowercase)");//ASCII value of uppercase alphabets – 65 to 90
    else if (a>=48 && a<=57)
     printf("digit");//ASCII value of digits [0 – 9] ranges from [48 – 57]. 
    else
     printf("special character");//Special Characters(32–47 / 58–64 / 91–96 / 123–126):
return 0;
}