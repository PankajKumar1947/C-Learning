// Write a program to calculate the product of two matrices each of order 3*3..
#include<stdio.h>
#define N 50

int main(){
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("Enter rows and columns for the first matrix:\n");
    scanf("%d %d",&m,&n);
    // Taking first matrix..
    printf("Enter elements of first matrix:\n");
    for(i=0;i<=m-1;i++)
        for(j=0;j<=n-1;j++)
        scanf("%d",&a[i][j]);

    // Taking Second matrix 
    printf("Enter rows and columns for the second matrix:\n");
    scanf("%d %d",&p,&q);
    printf("\nEnter elements of second matrix:\n");
    for(i=0;i<=p-1;i++)
        for(j=0;j<=q-1;j++)
        scanf("%d",&b[i][j]);

    // Printing first matrix..
    printf("First matrix is :\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

    // Printing Second matrix..
    printf("\nSecond matrix is :\n");
    for(i=0;i<=p-1;i++)
    {
        for(j=0;j<=q-1;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }

    //Multiplication
    if(n!=p)
      printf("\nCan't Multiply");

    else
    {
        for(i=0;i<=m-1;i++)
        for(j=0;j<=n-1;j++)
        {
            sum=0;
            for(k=0;k<=m-1;k++)
            sum=sum+(a[i][j]*b[k][j]);
            c[i][j]=sum;
        }
    }

    // printing multiplicated matrix
    printf("\nMultiplication is:\n");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
return 0;
}