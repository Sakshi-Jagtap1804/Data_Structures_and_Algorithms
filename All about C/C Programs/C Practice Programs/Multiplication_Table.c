// Multiplication_Table Program.

#include<stdio.h>

int main()
{
	int i;
	int num;
	// Take the number as an input from the user.
	printf("Enter the value of number whose multiplication table is to be printed : ");
	scanf("%d", &num);
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d X %d = %d.\n", num, i, i*num);
	}
	return 0;
}
