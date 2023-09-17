#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str = {"geeksforgeeks"};
    cout << str.length() << " ";
    str = str + "xyz";
    cout << str.substr(1, 3) << " ";
    cout << str.substr(2, 4) << " ";
    cout << str.find("eek") << " ";

    
    // Comparing of Strings
    string s1 = "abc";
    string s2 = "bcd";
    if(s1==s2)
    {
        cout << "\nSame\n";
    }
    else if(s1 < s2)
    {
        cout << "\nSmaller\n";
    }
    else
    {
        cout << "\nGreater\n";
    }



    // Reading Strings from Console
    string s3;
    cout << "Enter your name : ";
    // getline(cin, s3);
    getline(cin, s3, 'a');
    cout << "Your name is : " << s3;


    // Iterating  through a String
    string s4 = "geeksforgeeks";
    for(int i = 0; i < str.length(); i++)
    {
        cout << s4[i] << endl;
    }
    cout << endl;
    for(char x : s4)
    {
        cout << x;
    }
 

    return 0;
}
 