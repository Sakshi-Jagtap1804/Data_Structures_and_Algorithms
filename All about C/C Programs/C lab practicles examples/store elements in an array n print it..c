#include<stdio.h>

int main()
{
	int a[20], i,n;
	printf("enter the length of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d] :%d\n", i,a[i]);
	}
	return 0;
}
