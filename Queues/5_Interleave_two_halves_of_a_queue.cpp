/*

Interleave two halves of a queue

Problem : Given a queue of integers of even length, rearrange the elements 
                by interleaving the first half of the queue with the second half of the queue.

Input Format
In the function an integer queue passed.

Output Format
Return the interleaved queue .

Sample Input
11 12 13 14 15 16 17 18 19 20

Sample Output
11 16 12 17 13 18 14 19 15 20

*/

#include <bits/stdc++.h>
using namespace std;

queue<int> interLeave(queue<int> q)
{
    int n = q.size();
    queue<int> q1, q2;
    for (int i = 0; i < (n / 2); i++)
    {
        int x = q.front();
        q1.push(x);
        q.pop();
    }

    for (int i = 0; i < (n / 2); i++)
    {
        int x = q.front();
        q2.push(x);
        q.pop();
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        if (1 & i)
        {
            x = q2.front();
            q2.pop();
            q.push(x);
        }
        else
        {
            x = q1.front();
            q1.pop();
            q.push(x);
        }
    }

    return q;
}

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    q = interLeave(q);
    int length = q.size();
    for (int i = 0; i < length; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}