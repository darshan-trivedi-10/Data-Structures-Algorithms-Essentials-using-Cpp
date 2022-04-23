// https://leetcode.com/problems/two-sum/
/*
Problem :
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [2,7]
Output: Because nums[0] + nums[1] == 9, we return [2, 7].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [2,4]
Example 3:

Input: nums = [3,3], target = 6
Output: [3,3]
*/

#include <bits/stdc++.h>
using namespace std;

//  Time Complexity : O(N^2);
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i + 1; j < nums.size(); j++)
        {
            sum += nums[i] + nums[j];
            if (sum == target)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                break;
                // return {nums[i],nums[j]};
            }

            sum = 0;
        }
    }

    return ans;
}

//  Time Complexity : O(N*logn);
int b_search(vector<int> arr, int target, int i)
{
    int s = i + 1, e = arr.size() - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == target)
        {
            return m;
        }
        else if (arr[m] > target)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return -1;
}

vector<int> twoSum2(vector<int> &nums, int target)
{
    vector<int> idx;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int search = b_search(nums, (target - nums[i]), i);
        if (search != -1)
        {
            idx.push_back(nums[i]);
            idx.push_back(nums[i + search]);
            break;
        }
    }

    return idx;
}

vector<int> twoSum3(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(target - nums[i]) != mpp.end())
        {
            ans.push_back(mpp[target - nums[i]]);
            ans.push_back(i);
            break;
        }

        mpp[nums[i]] = i;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> ans = twoSum(v, target);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
