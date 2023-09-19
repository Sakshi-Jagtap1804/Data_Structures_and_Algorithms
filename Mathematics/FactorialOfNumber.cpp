#include <iostream>
using namespace std;

// Iterative solution       T.C. = theta(n)     Aux.Space.= O(1)
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}

// Recursive way        T.C. = T(n)     Aux.Space. = theta(n)
// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

int main()
{
    int n;
    cout << "Enter a number for factorial : ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << ".";
}