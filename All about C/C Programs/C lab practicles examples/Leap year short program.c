#include<stdio.h>
#include<conio.h>

int main()
{
	int year;
	
	printf("Enter the year:");
	scanf("%d", &year);
	
	//if year is completely divisible via 4
	if (year % 4 ==0)
	{
		printf("%d is a Leap year", year);
	}
	else
	{
		printf("%d is not a Leap year", year);
	}
	return 0;
}
