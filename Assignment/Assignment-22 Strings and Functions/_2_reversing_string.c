// Write a function reverse a string...
#include<stdio.h>
void reversing_string(char []);

int main(){
     char str[20];
    printf("Enter a string\t");
    fgets(str,20,stdin);
    reversing_string(str);
    
return 0;
}

void reversing_string(char s[])
{
    int i;
    for(i=0;s[i];i++);
    s[i-1]='\0';
    for(i=0;s[i];i++);
    for(int j=i;j>0;j--)
    {
        printf("%c",s[j]);
    }

}
