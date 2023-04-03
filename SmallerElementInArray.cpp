//Smaller element in an array
#include <stdio.h>

int main()
{
    int arr[7]={13,21,61,31,24};
    int Smaller=arr[0];
    int i;
    for (i=0;i<4;i++){
        if(arr[i]<Smaller)
        {
            Smaller=arr[i];
        }
       
    }
     printf("Smaller element in the array:%d",Smaller);
    return 0;
}

