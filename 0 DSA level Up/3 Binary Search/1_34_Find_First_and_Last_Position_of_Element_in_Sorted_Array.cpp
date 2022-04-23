// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
*/

//  Using Stl
#include <bits/stdc++.h>
using namespace std;

//  Using STL
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        bool isPresent = binary_search(nums.begin(), nums.end(), target);
        if (isPresent == false)
            return {-1, -1};

        int lower_idx = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int upper_idx = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        return {lower_idx, upper_idx};
    }
};

class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int target)
    {
        int s = 0, e = arr.size() - 1;
        int start = -1, end = -1;
        while (s <= e)
        {
            int m = (s + e) / 2;
            if (arr[m] == target)
            {
                start = m;
                e = m - 1;
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
        s = 0, e = arr.size() - 1;
        while (s <= e)
        {
            int m = (s + e) / 2;
            if (arr[m] == target)
            {
                end = m;
                s = m + 1;
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

        return {start, end};
    }
};

int main()
{

    return 0;
}