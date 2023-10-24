// Write a function to do case insensitive comparison of two strings.
#include<stdio.h>
#include<string.h>
int compare_case_ignore(char s1[],char s2[]);

int main()
{
    char str1[50],str2[50];
    printf("Enter two strings:\n");
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    if(compare_case_ignore(str1,str2)==1)
      printf("Entered two strings are equal.");
    else 
       printf("Entered two strings are not equal.");
    return 0;
}
int compare_case_ignore(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i];i++)
       if(s1[i]>='a' && s1[i]<='z')
           s1[i]=s1[i]-32;
    for(i=0;s2[i];i++)
       if(s2[i]>='a' && s2[i]<='z')
           s2[i]=s2[i]-32;
    for(i=0;s1[i] && s2[i];i++)
      if(s1[i]!=s2[i])
        return 0;//not same
      if(s1[i]==s2[i])
       return 1;//same
     else
      return 0;//not same
}