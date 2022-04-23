#include <iostream>
#include <stack>
using namespace std;

// Challenge : Insert at stack Bottom.
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

int main()
{
    stack<int> s;
    for (int i = 0; i < 6; i++)
    {
        s.push(i + 1);
    }

    insertAtBottom(s, 7);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}