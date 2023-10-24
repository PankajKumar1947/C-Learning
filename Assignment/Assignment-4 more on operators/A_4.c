//Write a program to make the last digit of a number stored in a variable as zero.
//(Example- if x=2345 then make it x=2340)
#include<stdio.h>

int main(){
    int x;
    printf("Enter a number\t");
    scanf("%d",&x);
    int y=x-x%10;
    printf("required number is %d",y);
return 0;
}