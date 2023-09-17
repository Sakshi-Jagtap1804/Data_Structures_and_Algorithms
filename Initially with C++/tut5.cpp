#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout<< "Enter the value of num1:\n",num1;       /* "<<" is called Insertion Operator */
    cin>> num1;         /* ">>" is Extraction Operator */

    cout<< "Enter the value of num2:\n",num2;   /* "<<" is called Insertion Operator */       
    cin>> num2;         /* ">>" is called Extraction Operator */

    cout<< "The sum is " << num1 + num2;
    cout<< "\nThe sub is " << num1 - num2;
    cout<< "\nThe mul is " << num1 * num2;
    cout<< "\nThe div is " << num1 / num2;

    return 0;
}