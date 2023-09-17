# include<stdio.h>
# include<conio.h>

/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want to multiplication table of:
6

Output:
Table of 6:
6*1 = 6
6*2 = 12
6*3 = 18
.
.
.
.
*/

int main()
{
	int n, i;
	
	printf("Enter the Number:\n");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++);
	{
		printf("\n%d * %d = %d", n, i, n*i);
	}
	
	return 0;
}
