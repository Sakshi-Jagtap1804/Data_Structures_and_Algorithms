#include <iostream>
using namespace std;

bool isPal(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    return (rev == n);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (isPal(n))
    {
        cout << "The entered number " << n << " is Palindrome!!";
    }
    else
    {
        cout << "Entered number is not Palindrome.";
    }
    return 0;
}