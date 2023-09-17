#include<stdio.h>

void main()
{
	int x;
	printf("\n enter a number:");
	scanf("%d", &x);
	if(x>0)
	{
		printf("\n x is a positive number");
		printf("\n value of x= %d",x);
	
	}
	else
	{
		printf("\n x is a negative number");
		printf("\n value of x= %d", x);
	}
}
