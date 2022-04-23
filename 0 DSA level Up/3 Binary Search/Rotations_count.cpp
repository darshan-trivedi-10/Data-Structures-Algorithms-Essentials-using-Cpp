/*
Find the number of rotations in a circularly sorted array

Input:  arr = [8, 9, 10, 2, 5, 6]
Output: The array is rotated 3 times
 
Input:  arr = [2, 5, 6, 8, 9, 10]
Output: The array is rotated 0 times
*/

#include <bits/stdc++.h>
using namespace std;

int rotations_count(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    int ans = 0;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (m > 0 && arr[m] < arr[m - 1])
        {
            ans = m;
            break;
        }
        else if (arr[m] > arr[e])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return ans;
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

    cout << rotations_count(arr);

    return 0;
}