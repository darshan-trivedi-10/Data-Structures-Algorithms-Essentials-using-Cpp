// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
#include <bits/stdc++.h>
using namespace std;

//  Time Complexity : O(n*logn)
// Space Cpmplexity : O(1)
int findUnsortedSubarray(vector<int> &nums)
{
    vector<int> check(nums.begin(), nums.end());
    sort(nums.begin(), nums.end());
    int i = 0, count = 0;
    int s = 0, e = 0;
    bool check1 = 1;
    for (auto num : nums)
    {
        if (num != check[i])
        {
            count++;
            if (check1)
            {
                s = i;
                e = i;
                check1 = 0;
            }
            else
            {
                e = i;
            }
        }
        i++;
    }

    return (e == 0 ? e : (e - s + 1));
}

int findUnsortedSubarray1(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    int min_ele = INT_MAX;
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i])
    }
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
    cout << "Working............\n\n";
    cout << findUnsortedSubarray1(arr);

    return 0;
}