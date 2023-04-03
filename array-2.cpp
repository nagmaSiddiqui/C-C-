#include <stdio.h>

int main() {
    // Write C code here
     int i;
   int ar1[5]={3,4,5,9,8};
   int ar2[5]={3,4,5,9,8};
   int ar3[10];
  
   //printing the values
   for(i=0;i<5;i++)
   {
      ar3[i]=ar1[i]+ar2[i];
   }
   for(i=0;i<5;i++)
   {
       printf("%d",ar3[i]);
   }
   return 0;
}

