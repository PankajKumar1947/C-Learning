/*Write a program to add numbers entered by user. User can enter any number of numbers until he enters 0
*/
#include<stdio.h>

int main(){
    int n,s=0;
    printf("Enter numbers(last number should be 0)");
    while(1)//for (int i=1;i;i++)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        s=s+n;
    }
    printf("Sum is %d",s);
return 0;
}