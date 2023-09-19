#include <iostream>
using namespace std;

// More Effective method         T.C. = O(n)
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i++)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

// Effective Method         T.C. = O(sqrt(n))
// Divisors always appear in pairs
// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }

//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// Naive method         T.C. = O(n)
// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Entered number is Prime!!";
    }
    else
    {
        cout << "No prime number.";
    }

    return 0;
}