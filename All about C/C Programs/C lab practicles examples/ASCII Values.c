/*Write a program to check whether the character entered through keyboard is capital letter, small letter, a digit or special symbol*/

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("Enter a Character=");
	scanf("%d", &ch);
	
	if(ch >=65 && ch <=90)
		printf("\n The Character is in Upper Case\n");
	if(ch >=97 && ch <=122)
		printf("\n The Character is in Small Case\n");
	if(ch >=48 && ch <=57)
		printf("\n The Character is a Digit\n");
	if((ch >=0,ch <=47)||(ch >=58,ch <=64)||(ch >=91,ch <=96)||(ch >=123,ch <=127))
		printf("\n The Character is Special Character\n");
		getch();
}
