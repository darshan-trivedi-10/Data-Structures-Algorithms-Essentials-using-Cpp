// Linear Search in Recursion

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int s, int n, int target)
{
    if (s == n)
    {
        return -1;
    }

    if (arr[s] == target)
    {
        return s;
    }

    return linearSearch(arr, ++s, n, target);
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

    int target;
    cin >> target;
    int check = linearSearch(arr, 0, n, target);
    if (check != -1)
    {
        cout << "Element is Present at " << check << "\n";
    }
    else
    {
        cout << "Element is Not Present\n";
    }

    return 0;
}