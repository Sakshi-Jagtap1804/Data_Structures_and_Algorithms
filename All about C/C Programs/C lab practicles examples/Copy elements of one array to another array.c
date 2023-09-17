// 5. Write a program in C to copy the elements of one array into another array.
#include<stdio.h>

int main()
{
	int a[20], b[20], i,n;
	printf("Enter Length of Array:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
	}
	for(i=0; i<n; i++)
	{
		printf("\nb[%d]:%d\t",i,b[i]);
	}
	return 0;
}
