#include<stdio.h>

int main()
{
	int a, b, choice;
	
	printf("\n Enter your choice\n");
	printf("a. Addition \nb. Subtraction \nc. Multiplication \nd. Division\n");
	scanf("%d", &choice);
	
	if( choice > 4)
	{
		printf("Select with in the range!\n");
	}
	else
	{
		printf("Enter 2 integer numbers:\n");
		scanf("%d %d", &a, &b);
	}
	
	switch(choice)
	{
		case 1: printf("%d + %d = %d\n", a, b, (a+b));
		break;
		
		case 2: printf("%d - %d = %d\n", a, b, (a-b));
		break;
		
		case 3: printf("%d * %d = %d\n", a, b, (a*b));
		break;
		
		case 4: if(b != 0)
					printf("%d / %d = %d\n", a, b, (a/b));
				else
				printf("Number can't be divided by 0\n");
				break;
				
		default:printf("You entered wrong choice\n");
				break;
	}
	
	return 0;
	
}
