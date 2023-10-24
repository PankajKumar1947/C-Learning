#include<stdio.h>

int main(){
     int m,n;
    printf("Enter order of a matrices\n");
    scanf("%d %d",&m,&n);// taking order of a matrix
    int a[m][n];
    // taking input in first matrix
    printf("Enter numbers in matrices\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
      scanf("%d",&a[i][j]);
    int b[m][n];
    // taking input in second matrix
    printf("Enter numbers in second matrix\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
    scanf("%d",&b[i][j]);
    // printing first matrix
    printf("The first matrix is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[i][j]);
      printf("\n");
    }
    // printing second matrix
    printf("The second matrix is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",b[i][j]);
      printf("\n");
    }
    // printing added matrix
    printf("The added matrix is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[i][j]+b[i][j]);
      printf("\n");
    }
return 0;
}