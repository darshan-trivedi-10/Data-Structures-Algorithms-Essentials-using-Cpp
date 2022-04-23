#include <bits/stdc++.h>
using namespace std;

void find_subset(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int start)
{
    ans.push_back(ds);
    for (int i = start; i < arr.size(); i++)
    {
        if (i != start && arr[i] == arr[i - 1])
        {
            continue;
        }

        ds.push_back(arr[i]);
        find_subset(arr, ans, ds, i + 1);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(vector<int> arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    vector<int> ds;
    find_subset(arr, ans, ds, 0);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2};
    vector<vector<int>> ans = uniqueSubsets(arr);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
