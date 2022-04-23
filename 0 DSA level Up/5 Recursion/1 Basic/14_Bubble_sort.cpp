/*
You Are Given number N, Print the number from N to 1;

Input : N = 5
Output : 5 4 3 2 1

*/
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n, int s)
{
    if (n == 0)
    {
        return;
    }

    if (s < n)
    {
        if (arr[s] > arr[s + 1])
        {
            swap(arr[s], arr[s + 1]);
        }

        bubble_sort(arr, n, s + 1);
    }
    else
    {
        bubble_sort(arr, n - 1, 0);
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

    bubble_sort(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}