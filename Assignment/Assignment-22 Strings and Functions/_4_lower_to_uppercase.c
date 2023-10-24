// Write a function to transform string into uppercase..
#include<stdio.h>
char* uppercase(char []);

int main(){
    char str[20];
    printf("Enter a sting\t");
    fgets(str,20,stdin);
    printf("Updated sting is %s",uppercase(str));
return 0;
}

char* uppercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
          s[i]=s[i]-32;
    }
    return s;
}