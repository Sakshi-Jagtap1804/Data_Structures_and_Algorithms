// 4. Write a program to print the index number, array element and address one below the other.

# include<stdio.h>
int main(){
	int arr[5],i,n;
	printf("No. of elements:\n");
	scanf("%d", &n);
	printf("Enter the element:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nIndex\tElement\t\tMemory Location\n");
	for(i=0; i<5; i++)
	{
		printf("\n%d\t%d\t\t%d\n", i, arr[i],&arr[i]);
	}
	return 0;
}
