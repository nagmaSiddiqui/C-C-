#include<stdio.h>
int main()
{
	int arr[5]={23,56,24,71,39};
	int large=arr[0];
    int i;
    for (i=0;i<4;i++){
        if(arr[i]>large)
        {
            large=arr[i];
        }
       
    }
     printf("Larger element:%d",large);
    return 0;
	
}
