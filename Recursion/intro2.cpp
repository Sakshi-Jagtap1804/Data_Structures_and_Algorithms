#include <iostream>
using namespace std;

void fun1(int n)
{
    if(n==0)
    {
        return;
    }
    cout << "GFG\n";
    fun1(n-1);
}
 
int main() {
    fun1(2);

    return 0;
}
 