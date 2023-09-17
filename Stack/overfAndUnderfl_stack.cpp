#include <iostream>
using namespace std;

struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack is full\n";
            // break;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            // break;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
        }
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    MyStack s(5);
    cout << s.pop() << endl;  // pop & peek on
    cout << s.peek() << endl; // empty stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.isEmpty();

    return 0;
}