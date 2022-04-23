/*
You are given an array find the array is sorted or not using recursion.
*/

#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int s, int n)
{
    if (s == n - 1)
    {
        return true;
    }
    if (arr[s] <= arr[s + 1])
    {
        return sorted(arr, ++s, n);
    }

    return 0;
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

    if (sorted(arr, 0, n))
    {
        cout << "Sorted\n";
    }
    else
    {
        cout << "Unsorted\n";
    }

    return 0;
}