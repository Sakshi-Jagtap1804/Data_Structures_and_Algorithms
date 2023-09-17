#include<stdio.h>
#include<conio.h>

void main()
{
	int i, a[50], sum, n, even, odd;
	printf("\n Enter no. of elements :");
	scanf("%d", &n);		// Reading values into Array
	
	printf("\n Enter the values :");
	for(i = 0; i < n; i++)
	scanf("%d", &a[i]);		/* Computation of total*/
	sum = 0; even = odd = 0;
	for(i=0; i < n; i++)
	{
		sum = sum + a[i];
		if(a[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	
	/* Printing of all elements of array */
	for(i = 0; i < n; i++)
	printf("\n a[%d] = %d", i, a[i]);
	
	/* printing of total */
	print("\n sum = %d\n even = %d\n odd = %d", sum, even, odd);
}
