class Solution
{
public:
    vector<int> findErrorNums(vector<int> &arr)
    {
        int i = 0, n = arr.size();
        while (i < n)
        {
            int correct = arr[i] - 1;
            if (arr[i] != arr[correct]) 
            {
                swap(arr[i], arr[correct]);
            }
            else
            {
                i++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != (i + 1))
            {
                return {arr[i], i + 1};
            }
        }

        return {-1, -1};
    }
};