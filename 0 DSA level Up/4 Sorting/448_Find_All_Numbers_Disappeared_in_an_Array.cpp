// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i])-1;
        arr[index] *= -1;
        if (arr[index] > 0)
        {
            return abs(arr[i]);
        }
    }

    return -1;
}};