// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>

int main(){
    float cp,sp;
    printf("Enter cp and sp of a product\n");
    scanf("%f %f",&cp,&sp);
    float profit=sp-cp;
    if (profit>0)
      printf("profit is %0.2f and profit percentage is %0.2f",profit,profit*100/cp);
    else
      printf("loss is %0.2f and loss percentage is %0.2f", -profit, -profit*100/cp);
return 0;
}