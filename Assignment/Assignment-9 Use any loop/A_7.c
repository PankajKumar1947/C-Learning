// WAP to counts digits in a given number..
#include<stdio.h>

int main(){
    int n, count=0;
    printf("Enter a number  ");
    scanf("%d",&n);
    int n1=n;
    while(n){
        n=n/10;
        count++;
    }
    printf("The number of digits present in %d is %d",n1, count);
return 0;
}