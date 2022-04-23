/*
Given  ladder containing N steps, you can take a jump of 1,2 or 3 at each step. Find the number of ways to climb the ladder.

Input
N = 4

Output :
7
*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int way(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    // Recursive
    return way(n - 1) + way(n - 2) + way(n - 3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << way(n);

    return 0;
}