//insertion in array
#include <stdio.h>
int main()
{
   int arr[40],i,n,loc,key;
   printf("Enter the number of elements of array:");
   scanf("%d",&n);
   printf("Enter %d elements of the array:",n);
   for(i=0;i<n;i++)
   {
       scanf(" %d ",&arr[i]);
   }
   printf("Enter the element for insertion:");
   scanf("%d",&key);
   printf("\nEnter the location where you want to insert element in array:");
   scanf("%d",&loc);
   
   for(i=n-1;i>=loc;i--){
       arr[i+1]=arr[i];
   }
    printf("The inserted array is:",arr[i+1]);
    return 0;
}

