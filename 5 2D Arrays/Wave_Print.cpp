/*

Wave Print!
Given a matrix, print it in Reverse Wave Form.

Input Format:
Given integer m (number of rows), integer n (number of columns) and 2d vector.

Output Format:
Return a linear vector of integers in the required order.



Examples :

Input :
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Output :
4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1

Input :
1  9  4 10
3  6 90 11
2 30 85 72
6 31 99 15

Output :
10 11 72 15 99 85 90 4 9 6 30 31 6 2 3 1

*/

#include <iostream>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    bool check = 1;

    for (int i = m - 1; i >= 0; i--)
    {
        if (check)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[j][i] << " ";
            }

            check = 0;
        }
        else
        {
            for (int j = (m - 1); j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }

            check = 1;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // 13 14 15 16 12 11 10 9 5 6 7 8 4 3 2 1
    for (int i = m - 1; i >= 0; i--)
    {
        if (check)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[j][i] << " ";
            }

            check = 0;
        }
        else
        {
            for (int j = (m - 1); j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }

            check = 1;
        }
    }

    return 0;
}