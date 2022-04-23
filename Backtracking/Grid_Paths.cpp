/*
Given a M x N gris,  find the number of way to reach the bottom right corner starting from top left. at each cell you can move right or down

Input
2D Matrix

Output :
Print the number of ways.
*/

#include <bits/stdc++.h>
using namespace std;

int gridWay(int i, int j, int n, int m)
{
    if (i == n && j == m)
    {
        return 1;
    }

    if ((i > n || j > m) || (i < 0 || j < 0))
    {
        return 0;
    }

    int left = gridWay(i, j + 1, n, m);
    int bottom = gridWay(i + 1, j, n, m);

    return left + bottom;
}
/*
Formula = (m-1 + n-1) ! --> factorial
*/
int main()
{
    int n, m;
    cin >> n >> m;
    cout << gridWay(0, 0, n-1, m-1);

    return 0;
}
