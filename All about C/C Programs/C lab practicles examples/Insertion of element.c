#include<stdio.h>
#include<conio.h>

void main()
{
	int a[30], n, i, x, loc;
	
	/*
	x : Element to be inserted 
	n : No. of elements in the array
	i : For scanning of the array
	loc : Place where the new element is to be inserted 
	*/
	
	printf("\n Enter no. of elements :");
	scanf("%d", &n);
	
	/* Read n elements in an array */
	printf("\nEnter %d elements :", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
	/* Enter element to be inserted */
	printf("\nEnter the element to be inserted :");
	scanf("%d", &x);
	
	printf("\nEnter the location");
	scanf("%d", &loc);
	/* Creating a space at the specified location */
	
	for(i=n-1; i>loc; i--)
	a[i+1] = a[i];
	
	a[loc] = x;		//Element inserted 
	/* Printing of result */
	for(i=0; i<n; i++)
	printf("\n%d", a[i]);
}
