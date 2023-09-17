#include<stdio.h>

void main()
{
	int A,B,C;
	printf("\n Enter three numbers:");
	scanf("%d %d %d", &A,&B,&C);
	if(A<B)
		if(A<C)
			printf("\n %d is smallest number", A);
		else
			printf("\n %d is a smallest number", C);
	else
		if(B<C)
			printf("\n % is a smallest number", B);
		else
			printf("\n %d is a smallest number", C);
}
