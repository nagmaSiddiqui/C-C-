#include<stdio.h>
int main()
{
int counter1,counter2,chk,temp_val,val[100];
printf("Please enter the total count of the elements that you want to sort: \n");
scanf("%d",&chk);
printf("Please input the elements that has to be sorted:\n");
for(counter1=0;counter1<chk;counter1++)
{
scanf("%d",&val[counter1]);
}
for(counter1=1;counter1<=chk-1;counter1++)
{
temp_val=val[counter1];
counter2=counter1-1;
while((temp_val<val[counter2])&&(counter2>=0))
{
val[counter2+1]=val[counter2];
counter2=counter2-1;
}
val[counter2+1]=temp_val;
}
printf("\n Output generated after using insertion sort \n");
for(counter1=0;counter1<chk;counter1++)
{
printf("%d ",val[counter1]);
}
return 0;
}
