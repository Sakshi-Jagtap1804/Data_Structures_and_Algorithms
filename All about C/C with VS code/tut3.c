// Write a Program to find factorial of any number.

        /* x = Factorial of Number(n)
           n = The number of which we want to find the factorial
        */

#include<stdio.h>
#include<conio.h>

int fact(int);

void main(){
    int x, n;
    printf("\n Enter the value of n : ");
    scanf("%d", &n);
    
    x = fact(n);
    printf("\n The Factorial of Number %d is  %d.", n, x);
    getch();
}

int fact(int n)
{
    if(n == 0)
    return(1);
    return(n*fact(n-1));
}


