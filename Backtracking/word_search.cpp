/*
Word Search
Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

Input Format
In the function 2-d vector of character is passed.

Output Format
Return true if the word is present otherwise false.

Sample Input
board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "ABCCED"

Sample Output
true

*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

bool chk = false;
void check(vector<vector<char>> &board, string word, int i, int j, int k)
{
    if (k == word.size())
    {
        chk = true;
        return;
    }

    if (i < 0 || j < 0 || i == board.size() || j == board[0].size() || board[i][j] == ';')
    {
        return;
    }

    if (board[i][j] == word[k])
    {
        char c = board[i][j];
        board[i][j] = ';';
        check(board, word, i, j + 1, k + 1);
        check(board, word, i, j - 1, k + 1);
        check(board, word, i + 1, j, k + 1);
        check(board, word, i - 1, j, k + 1);
        board[i][j] = c;
    }

    return;
}

bool wordSearch(vector<vector<char>> &board, string word)
{
    chk = false;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == word[0])
            {
                check(board, word, i, j, 0);
            }
        }
    }

    return chk;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}