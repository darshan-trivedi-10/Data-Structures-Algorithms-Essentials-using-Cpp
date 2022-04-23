// https://www.geeksforgeeks.org/how-to-declare-a-2d-array-dynamically-in-c-using-new-operator/

#include <iostream>
using namespace std;

int main()
{
    int n, m = 100;
    cin >> n>>m;
    int **arr = new int *[n];

    // Allocate memory for each row
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    int val = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = val;
            val++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
    return 0;
}