#include<stdio.h>

void main()
{
	int x;
	printf("\n Enter the number:");
	scanf("%d",&x);
	switch(x)
	{
		case0: printf("\n Zero");			break;
		case1: printf("\n One");			break;
		case2: printf("\n Two");			break;			
		case3: printf("\n Three");			break;
		case4: printf("\n Four");			break;
		case5: printf("\n Five");			break;			
		case6: printf("\n Six");			break;
		case7: printf("\n Seven");			break;
		case8: printf("\n Eight");			break;
		case9: printf("\n Nine");			break;
	  default: printf("Unknown value");		break;
 	}
}
