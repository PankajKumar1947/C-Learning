/*
Write a program which asks user to enter an even number, computer will give user at most 3 chances, if user failed to answer in any of the chances, "Game Over" message should be displayed on the screen, otherwise "You Win" message should be displayed and game stops immediately. 
*/
#include<stdio.h>

int main(){
    int i,n;
    for(i=1;i<=3;i++)
    {
        printf("Enter even numbers\n");
        scanf("%d",&n);
        if(n%2==0)
        break;
    }
    if (i==4)
    printf("Game Over");
    else
    printf("You Win");
return 0;
}