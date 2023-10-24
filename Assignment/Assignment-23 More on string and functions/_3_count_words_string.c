//Q3. Write a function to count words in a given string.
#include<stdio.h>
#include<string.h>
char *triming_leading_spaces(char str[]);
int count_words_in_string(char *string);

int main()
{
    char string1[50];
    printf("Enter a string:\n");
    fgets(string1,50,stdin);
    triming_leading_spaces(string1);
    int k=count_words_in_string(string1);
    printf("Number of Words in %s is %d",string1,k);
    return 0;
}

int count_words_in_string(char *string)
{
    int count=0;
    triming_leading_spaces(string);
    for(int i=0;string[i];i++)
    {
        if(string[i]==' ')
        {
            if(string[i]==string[i+1])
            continue;
        else
          count++;
        }
    }
    return count+1;
}

char* triming_leading_spaces(char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
       count++;
    k=strlen(str);
    while(str[i]==' ')
      i++;
    for(j=0;str[j+1];j++)
       str[j]=str[i+j];
    str[k-count-i]='\0';
    return str;
}