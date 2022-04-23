/*
You Are Given number N, Print the number from N to 1;

Input : N = 5
Output : 5 4 3 2 1

*/
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n, int s, int max_ele)
{
    if (n == 0)
    {
        return;
    }

    if (s < n)
    {
        if (arr[s] > arr[max_ele])
        {
            max_ele = s;
        }
        selection_sort(arr, n, s + 1, max_ele);
    }
    else
    {
        swap(arr[max_ele], arr[n - 1]);
        selection_sort(arr, n - 1, 0, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}