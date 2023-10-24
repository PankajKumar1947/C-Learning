//Write a program which takes the month number as an input and display number of days in that month..
#include<stdio.h>

int main(){
    int m;
    printf("Enter month number\n");
    scanf("%d",&m);
    if (m==1 || m==3 || m==5 || m==7 || m==8 ||m==10 || m==12)
     printf("31 days");
    else if (m==2)
     printf("28 or 29 days");
    else 
     printf("30 days");
return 0;
}