// Write a program to calculate size of character constant.
#include<stdio.h>

int main(){
   char x;
   printf("Enter a character constant \t");
   scanf("%c",&x);
   int y=sizeof(x);
   printf("Size of character  %c  is %d",x,y);
return 0;
}