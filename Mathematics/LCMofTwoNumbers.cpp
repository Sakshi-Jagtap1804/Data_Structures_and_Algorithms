#include <iostream>
using namespace std;

// Effective solution       O(log(min(a,b)))
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// Naive solution       T.C. = O(a*b - max(a,b))    // max(a,b) is more precise
// int lcm(int a, int b)
// {
//     int res = max(a, b);
//     while (true)
//     {
//         if (res % a == 0 && res % b == 0)
//         {
//             return res;
//         }
//         res++;
//     }
//     return res;
// }

int main()
{
    int a, b;
    cout << "Enter a first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "LCM of two numbers is : " << lcm(a, b);

    return 0;
}