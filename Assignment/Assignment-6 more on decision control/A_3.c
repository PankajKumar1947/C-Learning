// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed....
#include<stdio.h>

int main(){
    int phy,maths, chem, eng, hindi;
    printf("Enter marks in physics, maths, chemistry, english and hindi each out of 100\n");
    scanf("%d %d %d %d %d", &phy, &maths,&chem,&eng,&hindi);
    int total_marks=phy+maths+chem+eng+hindi;
    if (total_marks>=33)
      printf("Candidate has passed the examination ");
    else 
      printf("Candidate has failed the examination");
return 0;
}