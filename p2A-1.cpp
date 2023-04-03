//C program to add two matrix
#include <stdio.h>
int main()
{
   int a[2][2],b[2][2],c[2][2],i,j;
   printf("Enter the four numbers:");
   for(i=0;i<=2;i++)
    for(j=0;i<=2;i++)
   scanf("%d",&a[2][2]);
   
   printf("Enter the four numbers:");
   for(i=0;i<=2;i++)
    for(j=0;i<=2;i++)
   scanf("%d",&b[2][2]);
   
   for(i=0;i<=2;i++)
    for(j=0;i<=2;i++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("Sum of matrix:%d",c);
        printf("\n");
    }
}

