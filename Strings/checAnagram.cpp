#include <iostream>
#include <algorithm>
using namespace std;
 
// Naive Solution       Time Comp. => O(nlogn)
// bool areAnagram(string &s1, string &s2)
// {
//     if(s1.length() != s2.length())
//     {
//         return false;
//     }
//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     return (s1==s2);
// }


// Efficient Solution           Time Comp.=> O(n+CHAR), Aux. Space => O(CHAR)
const int CHAR = 256;
bool areAnagram(string &s1, string &s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    
    int count[CHAR] = {0};
    for(int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i < CHAR; i++)
    {
        if(count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if(areAnagram(s1, s2))
    {
        cout << "YSE\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
 