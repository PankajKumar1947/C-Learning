//Write a program to print greater between two numbers. Print one number if both are the same .
#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
   /* if(n1>n2)
       printf("%d",n1);
    else
       printf("%d",n2);
*/
    //n1>n2? printf("%d",n1):printf("%d",n2);

    printf("%d",n1>n2? n1:n2);
return 0;
}