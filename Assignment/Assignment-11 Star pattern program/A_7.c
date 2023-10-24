#include<stdio.h>

int main(){
    for (char i='A';i<='E';i++)
    {
        char k;
      for(char j='A';j<='E';j++)
      {
        k=i;
        if(j>=i)
        {
         printf("%c",k);
         k--;
         }
         else
         printf(" ");
      }
      printf("\n");
    }
return 0;
}