// Program to search an element in an array.

#include<stdio.h>
#include<conio.h>

int main(){
	int a[30], n, i, x, found;
	
	/* n : Number of elements to be stored in the array.
	   i : For scanning the array.
	   x : Element to be Search.
	*/ 
	
	printf("\n Enter the No. of elements :", n);
	scanf("%d", &n);
	
	/* Read n elements in an array */
	printf("\nEnter %d elements :", &n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
	printf("\nEnter element to search : ", x);
	scanf("%d", &x);

    /* Assume that element does not exists in array */
    found = 0;
	
	for(i=0; i<n; i++)		
	/* If element is found in array then raise found flag
		and terminate from loop.
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