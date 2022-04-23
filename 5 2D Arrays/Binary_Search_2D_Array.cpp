#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

pair<int, int> staircaseSearch(int arr[][100], int n, int m, int key)
{
    if (key < arr[0][0] || key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int i = 0;
    int j = m - 1;
    while (i <= (n - 1) and j >= 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return {-1, -1};
}

// Staircase Search
int main()
{
    int n, m, key;
    cin >> n >> m >> key;
    int a[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    pair<int, int> ans = staircaseSearch(a, n, m, key);
    cout << ans.first << " " << ans.second << endl;
    
    return 0;
}