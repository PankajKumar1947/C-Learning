// Write a program to calculate simple interest.
#include<stdio.h>

int main(){
    int p,r,t;
    printf("Enter amount, rate and time\n");
    scanf("%d %d %d", &p,&r,&t);
    float interest=p*r*t/100.0;
    printf("Simple interest of entered data is %.2f", interest);
return 0;
}