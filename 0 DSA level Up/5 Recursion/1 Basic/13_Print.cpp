/*
N = 4
* * * *
* * *
* *
*

N = 3
* * *
* *
*

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n, int s)
{
    if (n == 0)
    {
        return;
    }

    if (s < n)
    {
        cout << "* ";
        print(n, s + 1);
    }
    else
    {
        cout << endl;
        print(--n, 0);
    }
}

void print1(int n, int s)
{
    if (n == 0)
    {
        return;
    }

    if (s < n)
    {
        print1(n, s + 1);
        cout << "*";
    }
    else
    {
        print1(n - 1, 0);
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n, 0);
    cout << endl;
    print1(n, 0);

    return 0;
}