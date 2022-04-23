#include <iostream>
using namespace std;

void print(int arr[][100], int n, int m)
{
    // Prints
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    // n Rows m Columns
    cin >> n >> m;
    int arr[n][n];

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Spiral print of 2D Array
    int start_row = 0, start_col = 0, end_row = n - 1, end_col = n - 1;
    while (start_col <= end_col and start_row <= end_row)
    {
        // start row
        for (int col = start_col; col <= end_col; col++)
        {
            cout << arr[start_row][col] << " ";
        }

        // end col
        for (int row = start_row + 1; row <= end_row; row++)
        {
            cout << arr[row][end_col] << " ";
        }

        // End Row
        for (int col = end_col-1; col >= start_col; col--)
        {
            if (start_row == end_row)
            {
                break;
            }

            cout << arr[end_row][col] << " ";
        }

        // start col
        for (int row = end_row-1; row >= start_row; row--)
        {
            if (start_col == end_col)
            {
                break;
            }

            cout << arr[row][start_col];
        }

        start_col++, start_row++, end_col--, end_row--;
    }

    return 0;
}
