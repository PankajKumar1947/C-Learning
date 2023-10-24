// WAP to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format - "HH:MM"
// Output format - "HH hour and MM Minute"
#include<stdio.h>

int main(){
    int h,m;
    printf("Enter the time in the format HH:MM\n");
    scanf("%d:%d",&h,&m);
    printf("%d hour and %d Minute",h,m);
return 0;
}