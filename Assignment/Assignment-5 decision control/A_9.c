// Write a program to check whether a given year is a leap year or not.
#include<stdio.h>

int main(){
    int y;
    printf("Enter a year\t");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0)
      printf("Leap year");
    else if (y%400==0)
      printf("Leap year");
    else 
      printf("Non Leap year");
return 0;
}