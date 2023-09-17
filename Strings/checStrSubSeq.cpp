#include <iostream>
#include <string>

using namespace std;

// Iterative Solution
bool isSubSeq(string &s1, string &s2, int n, int m)
{
    if(n < m)
    {
        return false;
    }
    int j = 0;
    for(int i = 0; i < n && j < m; i++)
    {
        if(s1[i] == s2[j])
        {
            j++;
        }
    }
    if(j==m)
    {
        return true;
    }
    else
    {
        return false;
    }
}



// Recursive Solution
// bool isSubSeq(string &s1, string &s2, int n, int m)
// {
//     if(m==0)
//     {
//         return true;
//     }
//     if(n==0)
//     {
//         return false;
//     }
//     if(s1[n-1]==s2[m-1])
//     {
//         return isSubSeq(s1, s2, n-1, m-1);
//     }
//     else
//     {
//         return isSubSeq(s1, s2, n-1, m);
//     }
// }


int main() {
    string s1 = "ABCD";
    string s2 = "AN";
    if(isSubSeq(s1, s2, s1.length(), s2.length()))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
 