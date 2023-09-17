#include <stdio.h>
struct database
{
	int No;
	char component[33];
	char symbol[44];
	int lettervalue;
	float cost;
};
int main()
{	struct database c1,c2,c3,c4,c5;
	printf("\nEnter the number,component ,symbol, lettervalue and cost:");
	scanf("%d %s %s %d %f",&c1.No,&c1.component,&c1.symbol,&c1.lettervalue,&c1.cost);
	
	printf("\nEnter the number,component ,symbol, lettervalue and cost:");
	scanf("%d %s %s %d %f",&c2.No,&c2.component,&c2.symbol,&c2.lettervalue,&c2.cost);
	
	printf("\nEnter the number,component ,symbol, lettervalue and cost:");
	scanf("%d %s %s %d %f",&c3.No,&c3.component,&c3.symbol,&c3.lettervalue,&c3.cost);
	
	printf("\nEnter the number,component ,symbol, lettervalue and cost:");
	scanf("%d %s %s %d %f",&c4.No,&c4.component,&c4.symbol,&c4.lettervalue,&c4.cost);
	
	
	printf("+---------------+---------------+------------+------------------+\n");
	printf("+               +               +            +                  +\n");
	printf("+\tSr.no+\tCOMPONENT+\tsymbol+\tletterValue+\tcost\t+\n");
    printf("+               +               +            +                  +\n");
	printf("+---------------+---------------+------------+------------------+");
	printf("\n+\t%d \t+%s \t+%s \t+%d \t+%f\t+\n",c1.No,c1.component,c1.symbol,c1.lettervalue,c1.cost);
	printf("+---------------+---------------+------------+------------------+");
	printf("\n+\t%d \t+%s \t+%s \t+%d \t+%d\t+\n",c2.No,c2.component,c2.symbol,c2.lettervalue,c2.cost);
    printf("+---------------+---------------+------------+------------------+");
    printf("\n+\t%d \t+%s \t+%s \t+%d \t+%d\t+\n",c3.No,c3.component,c3.symbol,c3.lettervalue,c3.cost);
    printf("+---------------+---------------+------------+------------------+");
    printf("\n+\t%d \t+%s \t+%s \t+%d \t+%d\t+\n",c4.No,c4.component,c4.symbol,c4.lettervalue,c4.cost);
    printf("+---------------+---------------+------------+------------------+\n");
	
	return 0;
	
}