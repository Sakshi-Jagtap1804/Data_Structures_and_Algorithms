// 2. Write a program in C to read n number of values in an array and display it in reverse order.
# include<stdio.h>

int main()
{
	int a[20], i, n;
	printf("enter length of array:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d", &a[i]);
	}
	printf("Normal order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	printf("the reverse order:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
