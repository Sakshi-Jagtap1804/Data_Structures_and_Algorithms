#include <iostream>
using namespace std;

// Program to find the prime factors of that number

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

// More Efficient Solution
// T.C. = Worst case ==> when n is prime ==> theta(sqrt(n))
// T.C. = For other numbers ==> less than theta(sqrt(n))
void primeFactors(int n)
{
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << "2 ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << "3 ";
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;

            while (n % (i + 2) == 0)
            {
                cout << (i + 2) << " ";
                n = n / (i + 2);
            }
        }
    }

    if (n > 3)
    {
        cout << n << " ";
    }
}

// Efficient Solution           T.C. = O(sqrt(n))
// void primeFactors(int n)
// {
//     if (n <= 1)
//     {
//         return;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             cout << i << " ";
//             n = n / i;
//         }
//     }

//     if (n > 1)
//     {
//         cout << n << " ";
//     }
// }

// Naive Solution       O(n2*log(n))
// void primeFactors(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i))
//         {
//             int x = i;
//             while (n % x == 0)
//             {
//                 cout << i << " ";
//                 x = x * i;
//             }
//         }
//     }
// }

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Prime factors of " << n << " are : ";
    primeFactors(n);

    return 0;
}