/*
Given a set of non-negative integers, and a value sum determine id there is a subset of the given set with sum equal to given sum.

Input
arr = [10, 12, 15, 6, 19, 20]
sum = 16
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

bool solve(vector<int> &arr, int sum, int s)
{
    if (sum == 0)
    {
        return true;
    }
    if (s > arr.size())
    {
        return 0;
    }
    bool a, b;
    if (arr[s] <= sum)
    {
        sum -= arr[s];
        a = solve(arr, sum, s + 1);
        sum += arr[s];
    }

    b = solve(arr, sum, s + 1);
    return a || b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {10, 12, 15, 6, 19, 20};
    bool check = solve(arr, 16, 0);
    if (check)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}