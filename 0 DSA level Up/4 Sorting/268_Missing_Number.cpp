#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/missing-number/

//  Time Complexity : O(N)
int missingNumber(vector<int> &arr)
{
    int sum = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int num = ((n * (n + 1)) / 2) - sum;
    return num;
}

//  Time Complexity : O(N)
int missingNumber1(vector<int> &arr)
{
    int num = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        num ^= i;
        num ^= arr[i];
    }

    return num;
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

    cout << missingNumber(arr);
    return 0;
}
