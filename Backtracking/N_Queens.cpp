// https://leetcode.com/problems/n-queens/
#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(3 * N).

bool safe(int row, int col, int n, vector<string> boards)
{
    int r1 = row;
    int c1 = col;

    while (row >= 0 && col >= 0)
    {
        if (boards[row][col] == 'Q')
        {
            return false;
        }

        row--;
        col--;
    }

    col = c1;
    row = r1;

    while (col >= 0)
    {
        if (boards[row][col] == 'Q')
        {
            return false;
        }

        col--;
    }

    row = r1;
    col = c1;

    while (col >= 0 && row < n)
    {
        if (boards[row][col] == 'Q')
        {
            return false;
        }

        row++;
        col--;
    }

    return true;
}

void solve(vector<vector<string>> &ans, vector<string> &boards, int n, int col)
{
    if (col == n)
    {
        if (ans.size() == 0)
            ans.push_back(boards);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (ans.size() > 0)
        {
            break;
        }

        if (safe(row, col, n, boards))
        {
            boards[row][col] = 'Q';
            solve(ans, boards, n, col + 1);
            boards[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans(0);
    string s(n, '.');
    vector<string> board(n, s);
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    solve(ans, board, n, 0);
    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<vector<string>> ans;
    ans = solveNQueens(n);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            for (auto j : i)
            {
                cout << j;
            }
            cout << endl;
        }
    }

    return 0;
}

bool safe(int row, int col, int n, vector<string> boards)
{
    int r1 = row;
    int c1 = col;

    while (row >= 0 && col >= 0)
    {
        if (boards[row][col] == 'Q')
        {
            return false;
        }

        row--;
        col--;
    }

    col = c1;
    row = r1;

    while (col >= 0)
    {
        if (boards[row][col] == 'Q')
        {
            return false;
        }

        col--;
    }

    row = r1;
    col = c1;

    while (col >= 0 && row < n)
    {
        if (boards[row][col] == 'Q')
        {
            return false;
        }

        row++;
        col--;
    }

    return true;
}

int solve(int &ans, vector<string> &boards, int n, int col)
{
    if (col == n)
    {
        ans++;
        return;
    }
    for (int row = 0; row < n; row++)
    {

        if (safe(row, col, n, boards))
        {
            boards[row][col] = 'Q';
            solve(ans, boards, n, col + 1);
            boards[row][col] = '.';
        }
    }
}

int nQueen(int n)
{
    int ans = 0;
    string s(n, '.');
    vector<string> board(n, s);
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    solve(ans, board, n, 0);
    return ans;
}