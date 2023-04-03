#include <stdio.h>

int
main ()
{
  int a[5];
  int b[5];

 
  printf("Enter the values for the first array\n");

  for (int i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);

    }
printf("Enter the values for the second array\n");
   
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
       
    }
   
     printf("the values for the first array are:\n");

  for(int i = 0; i < 5; i++)
    {
      printf("%d\n",a[i]);

    }
printf("the values for the second array are:\n");

  for(int i = 0; i < 5; i++)
    {
      printf("%d\n",b[i]);

    }

    for(int j=0;j<5;j++)
   {
     if(a[j]==b[j])
        printf("Equal at index number %d\n",j);
       
     else
        printf("Not Equal\n");
   }
   
  return 0;
}

