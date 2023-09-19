#include <iostream>
using namespace std;

// Effective approach       recursive approach      T.C. = O(log(min(a,b)))
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

// Effective Approach       Iterative way
// int gcd(int a, int b)
// {
//     while (a != b)
//     {
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else
//         {
//             b = b - a;
//         }
//     }
//     return a;
// }

// Naive Approach               T.C. = O(min(a,b))
// int gcd(int a, int b)
// {
//     int res = min(a, b);
//     while (res > 0)
//     {
//         if (a % res == 0 && b % res == 0)
//         {
//             break;
//         }
//         res--;
//     }
//     return res;
// }

int main()
{
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "The gcd or hcf is " << gcd(a, b);

    return 0;
}