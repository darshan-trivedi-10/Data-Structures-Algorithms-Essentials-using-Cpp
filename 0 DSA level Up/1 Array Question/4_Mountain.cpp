// https://leetcode.com/problems/longest-mountain-in-array/
#include <bits/stdc++.h>
using namespace std;

int longestMountain(vector<int> &arr)
{
    int i = 1, n = arr.size(), max_mnt = 0;
    while (i < n)
    {
        int upper = 0, down = 0;
        while (i < n && arr[i] == arr[i - 1])
        {
            i++;
        }

        // Going Up on Mountain
        while (i < n && arr[i] > arr[i - 1])
        {
            i++, upper++;
        }

        // Going down on Mountain
        while (i < n && arr[i] < arr[i - 1])
        {
            down++, i++;
        }

        if (upper && down)
        {
            max_mnt = max(max_mnt, upper + down + 1);
        }
    }

    return max_mnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << longestMountain(arr);

    return 0;
}
