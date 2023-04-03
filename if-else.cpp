#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",num);
	
	if(num!=2)
	{
		printf("The number %d is an even number!");
	}
	else
	{
		printf("The number %d is an odd number!");
	}
}
