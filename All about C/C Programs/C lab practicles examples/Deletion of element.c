#include<stdio.h>
#include<conio.h>

void main()
{
	int a[30], n, i, j;
	
	/* n : Number of elements stored in the array
	   i : For scanning the array
	   j : Location of the element to be deleted 
	*/
	
	printf("\nEnter the no. of elements :");
	scanf("%d",&n);
	
	/* Read n elements in an array */
	printf("\nEnter %d elements :", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
	// Read the location of the element to be deleted
	
	printf("\nLocation of the element to be deleted :");
	scanf("%d",&j);		/* Loop for the deletion */
	while(j<n)
	{
		a[j-1] = a[j];
		j++;
	}
			/* No. of elements reduced by 1 */
	
	/* Loop for printing */
	for(i=0; i<n; i++)
	printf("\n %d", a[i]);
	
	getch();
}

