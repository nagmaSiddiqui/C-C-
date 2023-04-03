#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	int i;
	i=fork();
	if(i<0)
	{
		printf("Cannot create the file")
		exit();
	}
	if(i==0)
	{
		printf("Child process\n");
		exit(0);
		
	}
	else
	{
		printf("Parent process\n");
	}
	
}
