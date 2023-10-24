#include<stdio.h>

int main(){
    int m,n;
    printf("Enter order of a matrices\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    // taking input
    printf("Enter numbers in matrices\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
      scanf("%d",&a[i][j]);
      // printing matrix
    printf("The matrix is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[i][j]);
      printf("\n");
    }
return 0;
}