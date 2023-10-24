// Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include<stdio.h>

int main(){
    float cp,sp;
    printf("Enter cp and sp of banana per dozen ");
    scanf("%f %f",&cp,&sp);
    float profit =(sp-cp)/12;
    printf("Profit earned upon selling 25 bananas is %f",profit*25);
return 0;
}