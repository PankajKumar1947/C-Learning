// WAP to check whether a given character is uppercase alphabet or lower case alphabet or some other special character , using switch case statement..
#include<stdio.h>

int main(){
    char x;
    printf("Enter a character\n");
    scanf("%c",&x);
    int y=x;
    switch(y)
    {
        case 65 ...90:
        printf("UpperCase");
        break;
        case 97 ...122:
        printf("LowerCase");
        break;
        default:
        printf("Invalid Response");
    }
return 0;
}