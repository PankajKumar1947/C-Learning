#include<stdio.h>

int main(){
    for (int i=1;i<=5;i++)
    {
        int k=i;
      for(int j=1;j<=5;j++)
      {
        if(j>=6-i)
         printf("*");
         else
         printf(" ");
      }
      printf("\n");
    }
return 0;
}