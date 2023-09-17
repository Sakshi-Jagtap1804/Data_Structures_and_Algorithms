#include <set>
#include <iostream>
#include <map>
using namespace std;

#define MAX_CHARS 256

class Solution
{
public:
    bool areIsomorphic(string str1, string str2)
    {
        set<char> a;
        set<char> b;
        for (int i = 0; i < str1.size(); i++)
        {
            a.insert(str1[i]);
            b.insert(str1[i]);
        }

        if (a.size() == b.size())
        {
            return 1;
        }

        return -1;
    }
};

int main()
{
    int t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        cin >> s2;
        Solution obj;
        cout << obj.areIsomorphic(s1, s2) << endl;
    }

    return 0;
}