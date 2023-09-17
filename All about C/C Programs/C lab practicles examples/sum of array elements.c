// 3. Write a program in C to find the sum of all elements of the array.

# include<stdio.h>
int main(){
	int a[65],i,sum=0;
	for(i=0;i<7;i++)
	{
		printf("\nEnter Number:");
		scanf("%d", &a[i]);
	}
	for(i=0;i<7;i++)
	{
		sum=sum+a[i];
	}
	printf("\nSum of Array Numbers=%d",sum);
	return 0;
}
