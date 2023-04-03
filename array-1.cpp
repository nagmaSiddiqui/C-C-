#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter the values of the array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
       
    }
        printf("a.) All the values of the array\n");

    for(int i=0;i<5;i++)
    {
        printf("%d \n",arr[i]);
    }
  printf("b.) All the values at even index of the array are :\n");
   
    for(int i=1;i<5;i=i+1)
    {
        printf("%d \n",arr[i]);
    }
   
    printf("c.) All the values at odd index of the array are :\n");
   
    for(int i=0;i<5;i=i+2)
    {
        printf("%d \n",arr[i]);
    }
        return 0;
}

