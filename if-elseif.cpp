#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	printf("\n you have entered %d as your as:",age);
	if(age>=18)
	{
		printf("You can vote!");
	}
	else if(age<18)
	{
			printf("Your age lies below 18 so you can not able to vote!");
	}

}
