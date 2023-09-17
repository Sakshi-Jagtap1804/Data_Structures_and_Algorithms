// Program to print the 2-Dimentional Array.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20][20], m, n, i, j;
	
	/* Size of array is 20*20
	whereas a specified size of array of size m*n 
	is also stored in the array.
	*/
	
//		m : Number of rows.
//		n : Number of columns.

	printf("\nEnter the rows and columns :");
	scanf("%d %d", &m, &n);
	
	/* Reading m*n elements */
	for(i=0; i<m; i++)		/* m rows */
	for(j=0; j<n; j++)		/* in each row there is n no. of columns. */
	{
		printf("\nEnter the values of (%d)(%d) = ", i,j);
		scanf("%d", &a[i][j]);
	}
	
	/* Print all elements of 2-Dimentional array. */
	for(i=0; i<m; i++)
	{
		printf("\n");
		for(j=0; j<n; j++)
		printf("%d\t", a[i][j]);
	}
	return 0;
}
