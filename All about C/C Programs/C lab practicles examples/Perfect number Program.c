#include<stdio.h>

void main()
{
	int n,i,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<n;i=i+1)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if (sum==n)
	{
		printf("The number %d is a perfect number.",n);
	}
	else
	{
		printf("The number %d is not a perfect number.",n);
	}
}
