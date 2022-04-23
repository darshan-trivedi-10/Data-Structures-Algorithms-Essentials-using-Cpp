#include <iostream>
#include <queue>
using namespace std;

// Queue STL
int main()
{
    queue<int> q;
    q.push(1), q.push(2), q.push(3), q.push(4), q.push(5);
    q.pop();
    while (!q.empty())
    {
        cout << q.front() << " " << q.size() << endl;
        q.pop();
    }
    cout << '\n';

    return 0;
}