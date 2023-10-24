// WAP to reverse a number....
#include<stdio.h>

int main(){
    int n,i,y=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n){
        y=10*y+n%10;
        n=n/10;
        i++;
    }
    printf("reversed number is %d",y);
return 0;
}