// you are given an array target element you have to find all the index of element and return using recursion. You have to return array.

// Linear Search in Recursion

#include <bits/stdc++.h>
using namespace std;

vector<int> all_Index(vector<int> arr, int target, int s)
{
    vector<int> ans(0);
    if (s == arr.size())
    {
        return ans;
    }

    if (arr[s] == target)
    {
        ans.push_back(s);
    }

    vector<int> ansformbelowcalls = all_Index(arr, target, ++s);
    for (auto it : ansformbelowcalls)
    {
        ans.push_back(it);
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
    int target;
    cin >> target;
    vector<int> ans(0);
    ans = all_Index(arr, target, 0);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}