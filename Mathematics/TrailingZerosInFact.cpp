#include <iostream>
using namespace std;

// Effective approach
int countTrailingZeros(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i++)
    {
        res = res + n / i;
    }

    return res;
}

// Naive method
// int countTrailingZeros(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     int res = 0;
//     while (fact % 10 == 0)
//     {
//         res++;
//         fact = fact / 10;
//     }

//     return res;
// }

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The count of zeros in the factorial of " << n << " is " << countTrailingZeros(n);
}