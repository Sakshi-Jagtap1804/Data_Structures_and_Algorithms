#include<stdio.h>
#include<conio.h>


void main()
{
	int a[10][10], m, n, i, j;
	/* Size of array ia 10*10
	   specified sized of array of 
	   size of m*n can be stored in array a */
	   
	   /* m : no. of rows 
	   	  n : no. of columns
	   */
	   
	   printf("\n Enter the no. of rows and columns :");
	   scanf("%d \t %d", &m, &n);
	   
	   /* read m*n elements */
	   for(i = 0; i < m; i++)
	   for(j = 0; j < n; j++)
	   {
	   	printf("\n Enter the value of (%d)(%d) =", i, j);
	   	scanf("%d", &a[i][j]);
	   }
	   
	   // Print all 2-D array elements.
	   for(i = 0; i < m; i++)
	   {
	   	printf("\n");	// Each row starts from newline
	   	for(j = 0; j < n; j++)
	   	printf("%d\t", a[i][j]);
	   }
	   getch();
}
