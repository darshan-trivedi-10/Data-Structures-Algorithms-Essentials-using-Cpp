// https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int target)
    {
        int n = arr.size(), m = arr[0].size();
        int s = 0, e = (n * m) - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            int element = arr[mid / m][mid % m];
            if (element == target)
            {
                return true;
            }
            else if (element > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        return false;
    }
};

int main()
{

    return 0;
}