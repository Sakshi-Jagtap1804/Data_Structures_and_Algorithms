#include <iostream>
#include <iostream>
#include <algorithm>

using namespace std;


// Efficient Method Solution    => Time C. : O(n),  Aux.Space : O(1)

bool isPalindrome(string &str2)
{
    int begin = 0;
    int end = str2.length()-1;
    while(begin < end)
    {
        if(str2[begin] != str2[end])
        {
            return false;
        }
        begin++;
        end--;
    }

    return true;
}



// Naive Method Solution
bool isPal(string &str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());

    return (rev==str);
}

int main() {
    string s1 = "madam";
    if(isPalindrome(s1))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}


