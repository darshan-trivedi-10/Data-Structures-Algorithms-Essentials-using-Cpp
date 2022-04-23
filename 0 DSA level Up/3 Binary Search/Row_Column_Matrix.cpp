/*
Problem :You are given a matrix of n row m column and integer target and you have to check if that target is present in a matrix or not. Matrix is Sorted in a row wise & column wise Manner.


Input : 
4 4
10 20 30 40
15 25 35 45
28 29 37 49
33 34 38 50
6
0 30 35 45 20 10

Output : 

Element is not Present
Element Found at 0 & 2
Element Found at 1 & 2
Element Found at 1 & 3
Element Found at 0 & 1
Element Found at 0 & 0
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> search(vector<vector<int>> matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    int row = 0, col = m - 1;
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return {row, col};
        }
        else if (matrix[row][col] > target)
        {
            col--;
        }
        else
        {
            row++;
        }
    }

    return {-1, -1};
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(m, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int target;
        cin >> target;

        vector<int> ans = search(matrix, target);
        if (ans[0] != -1)
        {
            cout << "Element Found at " << ans[0] << " & " << ans[1] << endl;
        }
        else
        {
            cout << "Element is not Present\n";
        }
    }

    return 0;
}