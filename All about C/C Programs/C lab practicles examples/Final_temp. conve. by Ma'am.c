#include<stdio.h>



#define F_low 0
#define F_max 250	//symbolic constants
#define Step 25

int main()

{
	typedef float REAL;				//Type defination for user defined data type
	REAL fahrenheit, celsius;		//Declaration
	
	fahrenheit= F_low;
	printf("fahrenheit\t\tcelsius\n\n");
	
	while(fahrenheit<=F_max)
	{
		celsius= (fahrenheit-32)/1.8;
		printf("%1.2f \t\t %9.5f\n",fahrenheit,celsius);
		fahrenheit=fahrenheit+Step;
	}
	
}
