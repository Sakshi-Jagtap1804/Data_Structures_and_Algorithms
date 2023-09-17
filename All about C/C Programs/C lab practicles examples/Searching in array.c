// Program to search an element in an array.

#include<stdio.h>
#include<conio.h>

void main(){
	int a[50], n, i, x, found;
	
	/* n : Number of elements to be stored in the array.
	   i : For scanning the array.
	   x : Element to be Search.
	*/ 
	
	printf("\n Enter the No. of elements :");
	scanf("%d", &n);
	
	/* Read n elements in an array */
	printf("\nEnter %d elements :", &n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
	printf("\nEnter element to search : ");
	scanf("%d", &x);
	
	for(i=0; i<n; i++)		
	/* If element is found in array then raise found flag
       nd terminate from loop.
	*/
	{
		if(a[i] == x)
		{
			found = 1;
			break;
		}
	}
	
		/* 
		   If element  found in the array 
		*/
		
	if(x == a[i])
	{			
		printf("\n %d is found at position %d", x);
	}
	else
	{
		printf("\n %d is not found in the array.", x);
	}
	
	getch();
}
