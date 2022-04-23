class Solution
{
public:
    vector<int> findDuplicates(vector<int> &arr)
    {
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int index = abs(arr[i]) - 1;
            arr[index] *= -1;
            if (arr[index] > 0)
            {
                ans.push_back(abs(arr[i]));
            }
        }

        return ans;
    }
};