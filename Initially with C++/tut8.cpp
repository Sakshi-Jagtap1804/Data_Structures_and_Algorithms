#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // char c = 'c';
    // cout<<"The value of a was : "<< a;
    // a = 45;
    // cout<<"\nThe value of a is : "<< a;
    // Constants in C++
        /* If we declare any value of constant
           in code then it will be remain 
           the same throughout the program 
        */
    // const int a = 3;                       
    // cout<<"The value of a was : "<<a;           
    // a = 45;          //  You will get an error because a is a constant                                  
    // cout<<"\nThe value of a is : "<< a;

    // Manupulators in C++
    int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is : "<< a <<endl;
    // cout<<"The value of b without setw is : "<< b <<endl;   
    // cout<<"The value of c without setw is : "<< c <<endl;

    // cout<<"The value of a is : "<< setw(4) << a <<endl;
    // cout<<"The value of b is : "<< setw(4) << b <<endl;   
    // cout<<"The value of c is : "<< setw(4) << c <<endl;

    // Opeerator Precedence
    int a = 3, b = 4;
    // // int c = (a * 5) + b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;
    


    return 0;
}