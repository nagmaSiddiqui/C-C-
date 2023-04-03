#include<stdio.h>
int main()
{
    int a,b,c,Greatestnumber;
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    Greatestnumber=(a>b?(a>c?a:c):(c>b?c:b));
    printf("The Greatest number is %d",&Greatestnumber);
    return 0;
    
}
