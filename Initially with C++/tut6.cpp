#include<iostream>
// There are two types of header files:
// 1. System header files: It comes with the compiler.
// 2. User defined header files: It is written by the programmer.

// #include "this.h"   //--> This will produce an error if this.h is not present in the current directory.


using namespace std;

// int main(){

//     cout<<"This is hello world program";
//     return 0;
// }

int main(){
    int a=4, b=5;

    cout<<"Operators in C++ :" <<endl;
    cout<<"Following are the types of operators in C++ :"<< endl;
    // Arithmetic operators 
    cout<<"Following are the Arithmetic operator in C++ :"<< endl;
    cout<<"The value of a + b is "<<a + b << endl;
    cout<<"The value of a - b is "<<a - b << endl;
    cout<<"The value of a * b is "<<a * b << endl;
    cout<<"The value of a / b is "<<a / b << endl;
    cout<<"The value of a % b is "<<a % b << endl;
    cout<<"The value of a++ is "<<a++ << endl;
    cout<<"The value of a-- is "<<a-- << endl;
    cout<<"The value of ++a is "<< ++a << endl;
    cout<<"The value of --a is "<< --a << endl;
    cout<<endl;

    // Assignment Operator --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators
    cout<<"Following are the Comparison Operators in C++ :"<< endl;
    cout<<"The value of a == b is "<< (a == b) << endl;
    cout<<"The value of a != b is "<< (a != b) << endl;
    cout<<"The value of a <= b is "<< (a <= b) << endl;
    cout<<"The value of a >= b is "<< (a >= b) << endl;
    cout<<"The value of a > b is "<< (a > b) << endl;
    cout<<"The value of a < b is "<< (a < b) << endl;
    cout<<endl;

    // Logical operators
    cout<<"Following are the Logical operators in C++ :"<< endl;
    cout<<"The value of this logical operator ((a==b) && (a<b)) is : "<< ((a==b) && (a<b)) << endl;
    cout<<"The value of this logical operator ((a==b) || (a<b)) is : "<< ((a==b) || (a<b)) << endl;
    cout<<"The value of this logical operator (!(a==b)) is : "<< (!(a==b)) << endl;

    
    return 0;
}