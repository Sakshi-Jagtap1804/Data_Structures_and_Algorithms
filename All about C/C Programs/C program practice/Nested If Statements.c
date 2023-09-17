#include<stdio.h>

void main()
{
	int A, B, C;
	printf("\n Enter three numbers:");
	scanf("%d %d %d", &A,&B,&C);
	if(A>B)
		if(A>C)
			printf("\n %d is largest number", A);
		else
			printf("\n %d is largest number", C);
	else
		if(B>C)
			printf("\n %d is largest number", B);
		else
			printf("\n %d is largest number", C);
}
