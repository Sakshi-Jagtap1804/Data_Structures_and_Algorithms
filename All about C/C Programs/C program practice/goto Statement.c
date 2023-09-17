#include<stdio.h>

void main()
{
	int SUM=0, x;
	
beg:print("\n Enter a number(-1 to terminate):");
	scanf("%d",&x);
	if(x==-1)
	  goto last;
	SUM= SUM+x;
	goto beg;
last: printf("\n sum= %d", SUM);
}
