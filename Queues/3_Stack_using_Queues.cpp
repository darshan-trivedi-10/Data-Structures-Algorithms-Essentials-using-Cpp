#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Implement a stack class, which uses 2 Queues internally as a data structure.
// push, pop, top, empty, size.

class Stack
{
private:
    queue<int> q1, q2;

public:
    bool empty()
    {
        return (q1.empty() && q2.empty());
    }
    int size()
    {
        int ans = (q1.size() > q2.size() ? q1.size() : q2.size());
        return ans;
    }
    void push(int data)
    {
        // Will insert data into non-empty Queue
        if (!q1.empty())
        {
            q1.push(data);
        }
        else
        {
            q2.push(data);
        }
    }

    int top()
    {
        int element;
        if (!q1.empty())
        {
            while (!q1.empty())
            {
                element = q1.front();
                q2.push(element);
                q1.pop();
            }
        }
        else
        {
            while (!q2.empty())
            {
                element = q2.front();
                q1.push(element);
                q2.pop();
            }
        }

        return element;
    }

    void pop()
    {
        int element;
        if (!q1.empty())
        {
            // Sift the element from q1 to q2  
            while (!q1.empty())
            {
                element = q1.front();
                if (q1.size() != 1)
                {
                    q2.push(element);
                }
                q1.pop();
            }
        }
        else
        {
            // Sift the element from q2 to q1
            while (!q2.empty())
            {
                element = q2.front();
                q1.push(element);
                if (q2.size() != 1)
                {
                    q1.push(element);
                }

                q2.pop();
            }
        }
    }
};

int main()
{
    Stack s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i + 1);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
