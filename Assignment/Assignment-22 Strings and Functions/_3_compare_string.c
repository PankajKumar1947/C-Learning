// Write a function to compare to string...
#include<stdio.h>
#include<string.h>
int compare(char [],char []);

int main(){
    char str1[20],str2[20];
    printf("Enter two string.\n");
    fgets(str1,20,stdin);
    fgets(str2,20,stdin);
    str1[strlen(str1)-1]='\0';
    str2[strlen(str2)-1]='\0';
    int k=compare(str1,str2);
    if(k<0)
    printf("%s comes before %s",str1,str2);
    if(k>0)
    printf("%s comes after %s",str1,str2);
    if(k==0)
    printf("%s and %s are equal",str1,str2);
return 0;
}
int compare(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i] && s2[i];i++)
    {
        if(s1[i]!=s2[i])
        break;
    }
    return s1[i]-s2[i];
}