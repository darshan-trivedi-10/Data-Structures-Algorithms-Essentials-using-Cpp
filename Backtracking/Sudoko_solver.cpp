#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

bool isvalid(vector<vector<char>> &board, int row, int col, char c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == c)
        {
            return false;
        }

        if (board[row][i] == c)
        {
            return false;
        }

        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 2)] == c)
        {
            return false;
        }
    }

    return true;
}
bool solve(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == '.')
            {
                for (char k = '1'; k < '10'; k++)
                {
                    if (isvalid(board, i, j, k))
                    {
                        board[i][j] = k;

                        if (solve(board) == true)
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j] = '.';
                        }
                    }
                }
            }
        }
    }

    return true;
}

void solveSudoku(vector<vector<char>> &board)
{
    solve(board);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}

