#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int main()
{
	int a=4;
	int b=5;
	int c=sum(a,b);
	printf("the sum is %d",c);
	return c;
	
}
