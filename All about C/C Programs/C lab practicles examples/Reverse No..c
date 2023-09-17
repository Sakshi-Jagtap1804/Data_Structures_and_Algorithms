#include<stdio.h>

int reverse(int number){
	int ans=0;
	while(number!=0){
		int units=number%10;
		ans=ans*10+units;
		number=number/10;
	}
	return ans;
}

void main() {
	
	int a[]={1234};
	int size=1;
	int i=0;
	for(i=0;i<1;i++){
		int rev;
		rev=reverse(a[i]);
		printf("Original number: %d \nReversed Number: %d \n", a[i],rev);
	}
}
