#include<stdio.h>

int main(){
	float Tc, Tf;
	printf("\nEnter the Temperature in Fahrenheit: ");
	scanf("%F, &Tf");
	
	Tc = (Tf-32)/1.8;
	
	printf("\nTemperature in Celsius: %F", Tc);
	
	return 0;
}
