#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &s, int data)
{
    // Base Case
    if (s.empty())
    {
        s.push(data);
        return;
    }

    // Recursive Case :
    int temp = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(temp);
}

// Challenge : Reverse the Stack.
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, temp);
}

int main()
{
    stack<int> s;
    s.push(1), s.push(2), s.push(3), s.push(4);
    cout << "BEFORE REVERSE OPERASTION\n";
    print(s);
    reverse(s);
    cout << "AFTER REVERSE OPERASTION\n";
    print(s);

    return 0;
}